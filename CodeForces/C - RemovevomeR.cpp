#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'


void solve(){
    int x; cin >> x;
    string s; cin >> s;
    int cnt = 0;
    for(int i =0; i+1 < x; i++){
        if(s[i] != s[i+1]){
            cnt++;
        }
    }
    cout << ((cnt == 1) ? 2 : 1) << endl;
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



