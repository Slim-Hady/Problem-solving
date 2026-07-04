#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'



void solve(){
    int x, y;
    cin >> x >> y;
    cout << ((x%y==0) ? "YES\n" : "NO\n");
   
}

signed main() {

    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}



