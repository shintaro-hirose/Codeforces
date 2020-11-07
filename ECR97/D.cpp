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

void solve(){
    int N; cin >> N;
    vi A(N);
    rep(i, N) cin >> A[i];

    int ans = 1;
    int prev_lef = 1;
    int cur_lef = 0;
    int prev = 1;
    for(int i = 1; i < N; i++){
        int cur = A[i];
        cur_lef++;
        if(cur < prev) {
            prev_lef--;
            if(prev_lef <= 0){
                prev_lef = cur_lef - 1;
                cur_lef = 1;
                ans++;
            }
        }
        prev = cur;
    }

    cout << ans << endl;
}

int main() {
    int T;
    cin >> T;
    rep(i, T) solve();
    return 0;
}