// note this is not a Valid answer because it not give the shortest path , the correct using BFS 
#include <bits/stdc++.h>

using namespace std;
#define int long long
#define endl '\n'

vector<string> matrix;
vector<vector<int>>vis;
int n , m;

int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};
char dir[] = {'U', 'D', 'L', 'R'};
vector<char> ans;

bool isValid(int i , int j){
    return i < n && i >= 0 && j < m && j >= 0;
}

bool dfs(int i , int j){

    if(!isValid(i ,j)) return false;  
    if(vis[i][j] || matrix[i][j] == '#' )return false;
    if(matrix[i][j] == 'B'){
        return true;
    }
    vis[i][j] = true;
    for(int d =0;d< 4;d++){

        int dxi = i+dx[d];
        int dxy = j+dy[d];

        ans.push_back(dir[d]);
        if(dfs(dxi,dxy)){
            return true;
        }
        ans.pop_back();
    }
    return false;
}

void solve(){

    cin>>n>>m;
    matrix = vector<string>(n);
    for(int i=0;i<n;i++){
        cin >> matrix[i];
    }
    vis = vector<vector<int>>(n, vector<int>(m));
    for(int i = 0; i < n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == 'A'){
                    if(dfs(i,j)){
                        cout << "YES" << endl;
                        cout << ans.size() << endl;
                         for(auto an : ans){
                                cout << an;
                            }
                            cout << endl;
                            return;
                    }else {
                        cout << "NO";
                        return;
                    }
            }
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
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}



