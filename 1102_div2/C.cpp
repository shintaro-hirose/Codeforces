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
#define INF (1e18)
#define PI (acos(-1))
const ll mod = 1000000007;

void solve(){
    int N;
    cin >> N;
    multimap<ll, ll> mmp;
    vl A(N);
    vl B(N);
    rep(i, N) cin >> A[i];
    rep(i, N) cin >> B[i];
    rep(i, N) mmp.insert(l_l(A[i], B[i]));
    vl Ari(N+1);
    ll sum = 0;
    int cnt = 1;
    for(auto itr = mmp.begin(); itr != mmp.end(); itr++){
        sum += (*itr).second;
        Ari[cnt] = sum;
        cnt++;
    }
    // rep(i, N+1) cout << Ari[i] << endl;
    ll ans = INF;
    cnt = 1;
    for(auto itr = mmp.begin(); itr != mmp.end(); itr++){
        ans = min(ans, max((*itr).first, Ari[N] - Ari[cnt]));
        cnt++;
    }
    ans = min(ans, Ari[N]);
    cout << ans << endl;

}

int main() {
    int T;
    cin >> T;
    rep(i, T) solve();
    return 0;
}