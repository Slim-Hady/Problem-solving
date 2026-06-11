#include <bits/stdc++.h>
 
using namespace std;
#define int long long
#define endl '\n'
 
vector<string> matrix;
vector<vector<int>>vis;
int n , m;
 
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
 
bool isValid(int i , int j){
    return i < n && i >= 0 && j < m && j >= 0;
}
 
void dfs(int i , int j){
    if(!isValid(i ,j)) return;  
    if(vis[i][j] || matrix[i][j] == '#')return;
    
    vis[i][j] = true;
    for(int d =0;d< 4;d++){
        int dxi = i+dx[d];
        int dxy = j+dy[d];
        dfs(dxi,dxy);
    }
}
 
void solve(){
 
    cin>>n>>m;
    matrix = vector<string>(n);
    for(int i=0;i<n;i++){
        cin >> matrix[i];
    }
    vis = vector<vector<int>>(n, vector<int>(m));
    int cnt = 0;
    for(int i = 0; i < n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == '.' && !vis[i][j]){
                    cnt++;
                    dfs(i,j);
            }
        }
    }       
    cout << cnt << endl;
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
