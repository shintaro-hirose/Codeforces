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
    string x; cin >> x;
    int xfirstnum = (int)(x[0] - '0');
    int lens[5] = {0,1,3,6,10};
    cout << (xfirstnum - 1) * 10 + (int)lens[x.length()] << endl;
}


int main() {
    int T;
    cin >> T;
    rep(i, T) solve();
    return 0;
}