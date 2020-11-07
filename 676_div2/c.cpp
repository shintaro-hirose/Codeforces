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

int main() {
    string S; cin >> S;
    int k = S.size() - 2;
    cout << 3 << endl;
    cout << "L " << S.size() - 1 << endl;
    cout << "R " << k + 1 << endl;
    cout << "R " << 2 * k + 3 << endl;
    return 0;
}