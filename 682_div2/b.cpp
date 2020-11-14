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
typedef vector<bool> vb;
typedef vector<vb> vvb;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

void solve(){
    int N; cin >> N;
    string ans = "NO";
    unordered_set<int> us;
    rep(i, N) {
        int a; cin >> a;
        us.insert(a);
    }
    if(us.size() != N)ans = "YES";
    cout << ans << endl;
}


int main() {
    int T;
    cin >> T;
    rep(i, T) solve();
    return 0;
}