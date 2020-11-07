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
    int N; cin >> N;
    vector<int> As(N);
    cin >> As[0];
    int n1, n2, n2index;
    n1 = As[0];
    n2 = -1;
    for(int i = 1; i < N; i++){
        cin >> As[i];
        if(As[i] != n1){
            n2 = As[i];
            n2index = i + 1;
        }
    }
    if(n2 == -1){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for(int i = 1; i < N; i ++){
        if(As[i] != n1){
            cout << i + 1 << " " << 1 << endl;
        } else {
            cout << i + 1 << " " << n2index << endl;
        }
    }

}


int main() {
    int T;
    cin >> T;
    rep(i, T) solve();
    return 0;
}