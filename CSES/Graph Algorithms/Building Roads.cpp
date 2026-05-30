#include <bits/stdc++.h>
 
using namespace std;
#define int long long
 
vector<vector<int>> graph;
vector<int>vis;
 
void dfs(int i) {
    vis[i] = 1;
    for (auto ch : graph[i]) {
        if (!vis[ch]) {
            dfs(ch);
        }
    }
}
 
void solve(){
    int n , m;
    cin >> n >> m;
    graph = vector<vector<int>>(n+1);
    vis = vector<int>(n+1);
    vector<int>ans;
    for (int i =0; i < m;i++) {
        int a , b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int cnt = 0;
    for (int i =1;i<=n;i++) {
        if (!vis[i]) {
            ans.push_back(i);
            dfs(i);
        }
    }
    cout << ans.size()-1 << endl;
    for (int i =1;i<ans.size();i++) {
        cout << ans[i-1] << " " << ans[i] << endl;
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
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
 
