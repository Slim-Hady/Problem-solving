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
 
 
 
void solve() {
    int n ; cin >> n;
    vi dp(n+1, INF);
    dp[0] = 0;
    for (int i = 1 ; i <= n ; i ++) {
        int x = i ;
        while (x) {
            int d = x %10;
            x/=10;
            if (d==0) continue;
            dp[i] = min(dp[i] , dp[i-d] + 1);
        }
    }
    cout << dp[n];
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
