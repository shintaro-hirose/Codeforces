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
    
    // 最終状態にBがある場合, AB, BBはありえないので
    // BAAA....A となる
    // 右から見ていき, Aに当たって右にBがあればABを消す方針
    // 見たBの数を保持しておく
    // Aに当たり, Bの数1以上だったらBを1減らす
    // Aが消せなかったらAの数1増やす
    // 左までいき切ったらBの数　偶数->0 奇数->1
    string S;
    cin >> S;
    int N = S.size();
    int cntA = 0, cntB = 0;
    rep(i, N){
        char c = S[N-1-i];
        if(c == 'B') cntB++;
        else if(cntB > 0) cntB--;
        else cntA++;
    }
    cntB %= 2;
    cout << cntA + cntB << endl;
}

int main() {
    int T;
    cin >> T;
    rep(i, T) solve();

    return 0;
}