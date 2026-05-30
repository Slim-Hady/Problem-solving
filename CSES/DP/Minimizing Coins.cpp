#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<long long, long long>
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define MOD 1000000007
#define endl '\n'
#define debug(x) cerr << #x << " = " << x << endl;
#define SlimHady ios::sync_with_stdio(false); cin.tie(0);
#define INF 1e9
 
 
 
int dp( int t , vector<int> & coins , vector<int> & memo) {
    // base case
    if (t < 0) return INF;
    if (t == 0) return 0;
    // memo
    if (memo[t] != -1 )return memo[t];
    // transition
    int take = INF;
    for (int c : coins) {
        int res = dp(t - c, coins , memo) ;
        if (res != INF) {
            take = min(take , res +  1);
        }
    }
    return memo[t] = take;
}
void solve() {
    int n , t;
    cin >> n >> t ;
    vector<int> memo(t+1 , -1);
    vector<int> coins(n);
    for (int &i :coins)cin >>i;
    int ans = dp(t, coins, memo);
    if (ans == INF) cout << -1 << endl;
    else cout << ans << endl;
}
 
int main() {
    SlimHady
 
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
 
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
