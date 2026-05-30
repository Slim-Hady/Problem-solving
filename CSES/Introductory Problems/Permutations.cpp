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
#define INF 1e18
 
void solve() {
    int n ; cin >> n ;
    if (n==1) {
        cout << 1 ;
        return;
    }
    if ( n <= 3) {
        cout << "NO SOLUTION";
        return ;
    }
    for (int i = 2 ; i<= n ; i+=2) cout << i << " ";
   for (int i = 1 ; i <= n ; i+=2) cout << i << " ";
 
 
}
 
int main() {
    SlimHady
 
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
 
    int t = 1;
   // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

