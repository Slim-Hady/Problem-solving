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
    vi dp(n+1 , 0);
    dp[0] = 1;
    for (int i = 1; i <= n ; i++) {
        for (int j = 1 ; j <= 6 ; j++) {
            if ( i >= j) {
                dp[i] = (dp[i] + dp[i-j]) % MOD;
            }
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
