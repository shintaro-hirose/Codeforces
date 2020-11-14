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
    int N, M; cin >> N >> M;
    vvi A(N, vi(M));
    rep(i, N) rep(j, M) cin >> A[i][j];
    rep(i, N){
        rep(j, M){
            if((i+j)%2 == 0){
                if(A[i][j] % 2 != 0) A[i][j]++;
            } else {
                if(A[i][j] % 2 != 1) A[i][j]++;
            }
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {
    int T;
    cin >> T;
    rep(i, T) solve();
    return 0;
}