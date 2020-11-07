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
    int n; cin >> n;
    vector<int> Shelf(n);
    rep(i, n) cin >> Shelf[i];
    int l;
    int ans = 0;
    bool had1 = false;
    rep(i,n){
        if(Shelf[i] == 1){
            l = i;
            break;
        }
    }
    for(int i = n - 1; i > l; i--){
        if(Shelf[i] == 1) had1 = true;
        if(had1 && Shelf[i] == 0) ans++;
    }
    cout << ans << endl;
}


int main() {
    int T;
    cin >> T;
    rep(i, T) solve();
    return 0;
}