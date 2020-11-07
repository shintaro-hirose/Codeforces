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
    int N;
    cin >> N;
    string ans = "";
    vi A(N);
    rep(i, N)cin >> A[i];
    int dsum1 = 0;
    bool hasAns1 = true;
    rep(i, N - 1){
        dsum1 += max(0, A[i+1] - A[i]);
        if(A[i+1] < A[i] && dsum1 > A[i+1]){
            hasAns1 = false;
            break;
        }
    }
    int dsum2 = 0;
    bool hasAns2 = true;
    rep(i, N - 1){
        dsum2 += max(0, A[N-2-i] - A[N-1-i]);
        if(A[N-2-i] < A[N-1-i] && dsum2 > A[N-2-i]){
            hasAns2 = false;
            break;
        }
    }
    if(hasAns1 || hasAns2) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    int T;
    cin >> T;
    rep(i, T) solve();
    return 0;
}