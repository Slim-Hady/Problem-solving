class Solution {
public:
    vector<vector<int>> vis;
    vector<vector<char>> graph;
    int dx[4] = {1, -1 , 0 ,0};
    int dy[4] = {0 , 0 , 1, -1};
    int n; int m;
    bool isValid(int x , int y){
        return x < n && x >= 0 && y < m && y >= 0; 
    }
    void dfs(int x , int y){
        vis[x][y] =1;
        for(int i = 0; i < 4 ; i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(isValid(nx,ny) && !vis[nx][ny] && graph[nx][ny] == '1'){
                dfs(nx,ny);
            }
        }    
    }
    int numIslands(vector<vector<char>>& grid) {
        graph = grid;
        n = grid.size();
        m = grid[0].size();
        int cnt = 0;
        vis = vector<vector<int>>(n , vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j =0; j < m ; j++){
                if(isValid(i, j) && !vis[i][j] && graph[i][j] == '1'){
                    dfs(i,j);
                    cnt++;
                }
            }
        }
        return cnt;
    }

};
