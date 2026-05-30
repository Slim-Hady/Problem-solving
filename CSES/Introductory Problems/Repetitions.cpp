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
 
 
 
void solve() {
    string s ; cin >> s;
    int cnt = 1 , ans = 0;
    for (int i = 0 ; i < s.size() ; i++) {
       if (s[i] == s[i+1]) {
           cnt ++ ;
       }
        ans = max(cnt ,ans);
        if (s[i] != s[i+1])cnt = 1;
    }
    cout << ans << endl;
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
