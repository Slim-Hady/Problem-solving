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
#define SlimHady ios::sync_with_stdio(false); cin.tie(0);cout.tie(NULL);
#define INF 1e9
 
 
 
void solve() {
    ll n , k ;
    cin >> n >> k;
    vi arr(n);
    for (auto &i : arr)cin >> i;
    map<ll,ll> mp;
    mp[0] = 1;
    ll sum = 0 , count = 0;
    for (int i = 0 ; i<n ;i++) {
        sum += arr[i];
        count += mp[sum - k];
        mp[sum] ++;
    }
    cout << count;
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
