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

bool isPrime(int n){
    for(int i = 2; i * i <=n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

void solve(){
    int N; cin >> N;
    if(isPrime(N)){
        rep(i, N) {
            rep(i, N){
                cout << 1 << " ";
            }
            cout << endl;
        }
    }
    else {
        rep(i, N - 1) {
            rep(j, i){
                cout << 0 << " ";
            }
            rep(j, 2){
                cout << 1 << " ";
            }
            rep(j, N - 2 - i){
                cout << 0 << " ";
            }
            cout << endl;
        }
        cout << 1 << " ";
        rep(i, N - 2) cout << 0 << " ";
        cout << 1 << endl;
    }

}


int main() {
    int T;
    cin >> T;
    rep(i, T) solve();
    return 0;
}