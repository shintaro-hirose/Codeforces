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
    int N;
    cin >> N;
    vector<i_i> ans;
    vector<string> Graph(N);
    rep(i, N) cin >> Graph[i];
    int S[2] = {Graph[0][1] - '0', Graph[1][0] - '0'};
    int F[2] = {Graph[N-1][N-2] - '0', Graph[N-2][N-1] - '0'};
    if(S[0]+S[1] == 0 && F[0]+F[1] == 0){
        ans.push_back(make_pair(1, 2));
        ans.push_back(make_pair(2, 1));
    } else if(S[0]+S[1] == 0 && F[0]+F[1] == 1){
        if(F[0] == 0){
            ans.push_back(make_pair(N, N-1));
        } else {
            ans.push_back(make_pair(N-1, N));
        }
    } else if(S[0]+S[1] == 1 && F[0]+F[1] == 0){
        if(S[0] == 0){
            ans.push_back(make_pair(1, 2));
        } else {
            ans.push_back(make_pair(2, 1));
        }
    } else if(S[0]+S[1] == 1 && F[0]+F[1] == 1){
        if(S[0] == 1){
            ans.push_back(make_pair(1, 2));
        } else {
            ans.push_back(make_pair(2, 1));
        }
        if(F[0] == 0){
            ans.push_back(make_pair(N, N-1));
        } else {
            ans.push_back(make_pair(N-1, N));
        }
    }
    else if(S[0]+S[1] == 1 && F[0]+F[1] == 2){
        if(S[0] == 1){
            ans.push_back(make_pair(1, 2));
        } else {
            ans.push_back(make_pair(2, 1));
        }
    }
    else if(S[0]+S[1] == 2 && F[0]+F[1] == 1){
        if(F[0] == 1){
            ans.push_back(make_pair(N, N-1));
        } else {
            ans.push_back(make_pair(N-1, N));
        }
    }
    else if(S[0]+S[1] == 2 && F[0]+F[1] == 2){
        ans.push_back(make_pair(1, 2));
        ans.push_back(make_pair(2, 1));
    }
    cout << (int)ans.size() << endl;
    for(i_i p: ans){
        cout << p.first << " " << p.second << endl;
    }
}

int main() {
    int T;
    cin >> T;
    rep(i, T) solve();
    return 0;
}