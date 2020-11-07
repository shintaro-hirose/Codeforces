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

void solve() {
    int x1, y1, x2, y2, ans;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1==x2 || y1==y2){
        ans = abs(x1-x2)+abs(y1-y2);
    } else {
        ans = abs(x1-x2)+abs(y1-y2)+2;
    }
    cout << ans << endl;
}

int main() {
    int T;
    cin >> T;
    rep(i, T) solve();

    return 0;
}