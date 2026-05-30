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
    int n , t; cin >> n >> t;
    vector<pair<int , int>> p;
    for (int i = 0 ; i < n ; i++) {
        int a ; cin >> a;
        p.push_back({a , i+1});
    }
    int lans = 0 ;
    int rans = 0 ;
    sort(all(p));
    int left = 0 ; int right = n - 1;
    bool isExit = false;
    while (left < right) {
        if (p[left].first + p[right].first == t) {
            lans = p[left].second;
            rans = p[right].second;
            isExit = true;
            break ;
        }
         if (p[left].first + p[right].first > t) {
            right -- ;
        }
        else left ++ ;
    }
    if (!isExit) cout << "IMPOSSIBLE" ;
    else {
        if (lans < rans) cout << lans << " " << rans << endl;
        else cout << rans << " " << lans << endl;
    }
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
