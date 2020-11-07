#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
const ll mod = 1000000007;

void solve() {
    /*
    出る、入る、双方と呼ぶ

    明白なパターン
    どっちかが双方->OK
    どっちも出る　または　どっちも入る->NG
    
    上記以外を考える
    つまり片方が入る、片方が出る
    これで戻ってくる場合、一周するしかない

    最初に時計回り、反時計回りで1周できるか見る: O(N)
    i=0~N-1で
    明白なパターンで判定
    明白でないとき出る方をみて、その回り方で1周できればOK

    */

    int N;
    string S;
    cin >> N >> S;
    bool canClock = true, canAntiClock = true;

    // 時計周りにいけるか 
    rep(i, N){
        if(S[i] == '<'){
            canClock = false;
            break;
        }
    }
       // 反時計周りにいけるか 
    rep(i, N){
        if(S[N-1-i] == '>'){
            canAntiClock = false;
            break;
        }
    }
    int ans = 0;
    rep(i, N){
        int prei;
        prei = (i+N-1)%N;

        if(S[i] == '-' || S[prei] == '-') ans++; // 明白OK
        else if(S[i] != S[prei]) continue;       // 明白NG
        else {
            if(S[i] == '>'){                     // 時計回り
                if(canClock) ans++;
            } else {                             // 反時計回り
                if(canAntiClock) ans++;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    int T;
    cin >> T;
    rep(i, T) solve();

    return 0;
}