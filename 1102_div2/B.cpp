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
    ll a,b;
    string S;
    cin >> a >> b >> S;
    bool had1 = false;
    bool had111 = false;
    ll N = S.size();
    ll cnt0 = 0;
    vl memo(0);
    rep(i,N){
        if(S[i] == '1'){
            had111 = true;
            if(had1){
                if(cnt0 != 0)memo.push_back(cnt0);
            }
            cnt0 = 0;
            had1 = true;
        } else {
            if(had1)cnt0++;
        }
    }
    if(!had111){
        cout << 0 << endl;
        return;
    }
    ll gcnt = memo.size() + 1;
    if(gcnt == 1){
        cout << a << endl;
        return;
    }
    ll cost = 0;
    rep(i, memo.size()){
        if(memo[i] * b <= a){
            gcnt--;
            cost += memo[i] * b;
        }
    }
    cost += gcnt * a;
    cout << cost << endl;

}

int main() {
    int T;
    cin >> T;
    rep(i, T) solve();
    return 0;
}