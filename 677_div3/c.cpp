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
    // 答えを持たないのはすべて同じときだけ
    // maxをさがして両側をみる
    int N; cin >> N;
    vector<int> As(N);
    int maxA = -1;
    bool hasAns = false;
    cin >> As[0];
    maxA = As[0];
    int pre = As[0];
    rep(i, N-1){
        cin >> As[i+1];
        maxA = max(maxA, As[i+1]);
        if(As[i+1] != pre) hasAns = true;
        pre = As[i+1];
    }
    if(!hasAns){
        cout << -1 << endl;
        return;
    }
    bool seenMax = false;
    rep(i, N){
        if(As[i] == maxA){
            seenMax = true;
        }
        if(seenMax && As[i] != maxA){
            cout << i << endl;
            return;
        }
    }
    for(int i = N - 1; i >= 0; i--){
        if(As[i] == maxA){
            seenMax = true;
        }
        if(seenMax && As[i] != maxA){
            cout << i+2 << endl;
            return;
        }
    }

}


int main() {
    int T;
    cin >> T;
    rep(i, T) solve();
    return 0;
}