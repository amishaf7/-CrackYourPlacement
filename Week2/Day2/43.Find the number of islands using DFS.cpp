class Solution {
public:
// void bfs(int n,int m,int dr[],int dc[],vector<vector<int>> &vis,vector<vector<char>> &grid,int row,int col){
//     vis[row][col]=1;
//     queue<pair<int,int>> q;
//     q.push({row,col});
//     while(!q.empty()){
//         int a=q.front().first;
//         int b=q.front().second;
//         q.pop();
//         for(int i=0;i<4;i++){
//             int nrow=a+dr[i];
//             int ncol=b+dc[i];
//             if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0 && grid[nrow][ncol]=='1'){
//                 vis[nrow][ncol]=1;
//                 q.push({nrow,ncol});
//             }
//         }
//     }
//     return ;
// }
void dfs(int n,int m,int dr[],int dc[],vector<vector<int>> &vis,vector<vector<char>> &grid,int row,int col){
    vis[row][col]=1;
    for(int i=0;i<4;i++){
        int nrow=row+dr[i];
            int ncol=col+dc[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0 && grid[nrow][ncol]=='1'){
                vis[nrow][ncol]=1;
                dfs(n,m,dr,dc,vis,grid,nrow,ncol);
    }
    }
}
    int numIslands(vector<vector<char>>& grid) {
      int n=grid.size();
      int m=grid[0].size();
      int dr[]={0,0,1,-1};
      int dc[]={1,-1,0,0};
      vector<vector<int>> vis(n,vector<int> (m,0));
      int count=0;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]==0 && grid[i][j]=='1'){
                //bfs(n,m,dr,dc,vis,grid,i,j);
                dfs(n,m,dr,dc,vis,grid,i,j);
                count++;
            }
        }
        
      } 
      return count; 
    }
};
