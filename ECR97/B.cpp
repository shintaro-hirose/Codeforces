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
    string S; cin >> S;
    char pre = '-';
    int cnt = 0;
    rep(i, N) {
        if(S[i] == pre) cnt++;
        pre = S[i];
    }
    cout << (cnt + 1) / 2 << endl;
}

int main() {
    int T;
    cin >> T;
    rep(i, T) solve();
    return 0;
}