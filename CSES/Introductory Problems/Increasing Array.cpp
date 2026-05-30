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
   ll n ; cin >> n ;
    vll arr(n);
    for (auto &i : arr) cin >> i;
    ll ans =0 ;
    for (ll i = 1 ; i < n ; i++) {
        if (arr[i] < arr[i-1] ) {
            ans += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
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
