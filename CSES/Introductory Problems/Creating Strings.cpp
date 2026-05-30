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
 
vector<string> res;
string curr;
int cnt = 0;
 
void backtrack(string s ,  vector<bool> & used) {
    if ( curr.size() == s.size()) {
        res.pb(curr);
        return;
    }
        for (int i = 0 ; i < s.size() ; i++) {
            if (used[i]) continue;
            if ( i > 0 and s[i] == s[i-1] and !used[i-1]) continue;
                used[i] = true;
                curr.pb(s[i]);
                backtrack(s , used);
                used[i] = false;
                curr.pop_back();
 
        }
    }
 
void solve() {
    string s ; cin >> s;
    sort(all(s));
    vector<bool> used;
    used.resize(s.size() , false);
    backtrack(s , used);
    cout << res.size() << endl;
    for (auto& str : res)
        cout << str << endl;
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
