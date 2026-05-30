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
 
vector<int> curr;
 
ll backtrack(vector<int>& p , ll sum , int i , ll total) {
    // base case
    if ( i == p.size()) {
        return abs((sum - total) - total);
    }
    // transition
    ll take = backtrack( p , sum , i+1 , total + p[i]);
    ll leave = backtrack( p , sum , i+1 , total);
 
    return min(take ,leave);
}
void solve() {
    int n ;cin >> n;
    vi p(n);
    ll sum =0;
    for (auto & i : p) {
        cin >> i;
        sum += i;
    }
   cout << backtrack(p , sum , 0 , 0);
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
