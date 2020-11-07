#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

void solve(){
    int a, b;
    cin >> a >> b;
    
    // (a, b)
    // (0, 0) -> 0
    // (1. 1) -> 1
    // (0, 1) or (1, 0) -> 0, 1どちらでも同じ 
    ll ans = 0;
    rep(i, 32){
        int abit = (a >> i) & 1;
        int bbit = (b >> i) & 1;
        if(abit == bbit) continue;
        ans += 1 << i;
    }
    cout << ans << endl;
}


int main() {
    int T;
    cin >> T;
    rep(i, T) solve();
    return 0;
}