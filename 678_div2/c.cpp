#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<string> vs;
typedef vector<vs> vvs;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

template <unsigned int MOD>
struct ModInt {
    using uint = unsigned int;
    using ull = unsigned long long;
    using M = ModInt;
    
    uint v;
    
    ModInt(ll _v = 0) { set_norm(_v % MOD + MOD); }
    M& set_norm(uint _v) {  //[0, MOD * 2)->[0, MOD)
        v = (_v < MOD) ? _v : _v - MOD;
        return *this;
    }
    
    explicit operator bool() const { return v != 0; }
    M operator+(const M& a) const { return M().set_norm(v + a.v); }
    M operator-(const M& a) const { return M().set_norm(v + MOD - a.v); }
    M operator*(const M& a) const { return M().set_norm(ull(v) * a.v % MOD); }
    M operator/(const M& a) const { return *this * a.inv(); }
    M& operator+=(const M& a) { return *this = *this + a; }
    M& operator-=(const M& a) { return *this = *this - a; }
    M& operator*=(const M& a) { return *this = *this * a; }
    M& operator/=(const M& a) { return *this = *this / a; }
    M operator-() const { return M() - *this; }
    M& operator++(int) { return *this = *this + 1; }
    M& operator--(int) { return *this = *this - 1; }
    
    M pow(ll n) const {
        if (n < 0) return inv().pow(-n);
        M x = *this, res = 1;
        while (n) {
            if (n & 1) res *= x;
            x *= x;
            n >>= 1;
        }
        return res;
    }
    
    M inv() const {
        ll a = v, b = MOD, p = 1, q = 0, t;
        while (b != 0) {
            t = a / b;
            swap(a -= t * b, b);
            swap(p -= t * q, q);
        }
        return M(p);
    }
    
    bool operator==(const M& a) const { return v == a.v; }
    bool operator!=(const M& a) const { return v != a.v; }
    friend ostream& operator<<(ostream& os, const M& a) { return os << a.v; }
    static uint get_mod() { return MOD; }
};

using Mint = ModInt<mod>;

vi L(0);
vi R(0);

Mint Fact(int a){
    Mint res = 1;
    for(Mint i = 2; i.v <= a; i++) res *= i;
    return res;
}

Mint Comb(int n, int r){
    Mint res = 1;
    res = Fact(n);
    res /= Fact(r);
    res /= Fact(n - r);
    return res;
}

void BinarySearch(int a, int x){
    int left = 0;
    int right = a;
    vector<int> P(a);
    rep(i, a) P[i] = i + 1;
    while(left < right){
        int middle = (left + right) / 2;
        if(P[middle] <= x) {
            if(middle != x - 1) L.push_back(middle);
            left = middle + 1;
        }else {
            if(middle != x - 1) R.push_back(middle);
            right = middle;
        }
    }
    ll ans = 0;

}

void solve(){
    int n, x, pos;
    cin >> n >> x >> pos;
    BinarySearch(n, pos + 1);
    int Lneed = L.size();
    int Rneed = R.size();
    if(Lneed > x - 1 || Rneed > n - x){
        cout << 0 << endl;
        return;
    }
    Mint ans = Fact(Lneed) * Fact(Rneed);
    ans = ans * Comb(x - 1, Lneed) * Comb(n - x, Rneed) * Fact(n - Rneed - Lneed - 1);
    cout << ans.v << endl;
}


int main() {
    solve();
    return 0;
}