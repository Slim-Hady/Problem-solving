#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'


void solve(){
    int x;
    cin >> x;
    if(x < 10){
        cout  << 11 << endl;
        return;
    }
    for(int i = 100; i < 1e9; i*=10){
        if(x < i){
            string ans = to_string(i);
            ans[ans.size()-1] = '1';
            cout << ans << endl;
            break;
        }
    }
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



