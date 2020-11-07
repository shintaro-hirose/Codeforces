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
    sort(A.begin(), A.end());
    // dp[i][j] 時間iまでにj個処理したときのmin
    vvi dp(401, vi(N + 1, INF));
    rep(i, 400) dp[i][0] = 0;

    rep(i, 400){
        for(int j = 1; j <= N; j++){
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j - 1] + abs(i + 1 - A[j - 1]));
        }
    }
    int ans = INF;
    rep(i, 400){
        ans = min(ans, dp[i][N]);
    }
    cout << ans << endl;
}

int main() {
    int T;
    cin >> T;
    rep(i, T) solve();
    return 0;
}