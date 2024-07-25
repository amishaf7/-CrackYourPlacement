class Solution {
public:
void dfs(int row,int col,vector<vector<int>> &image,vector<vector<int>> &ans,vector<vector<int>> &vis,int dr[],int dc[],int color){
    vis[row][col]=1;
    ans[row][col]=color;
    for(int i=0;i<4;i++){
        int nrow=row+dr[i];
        int ncol=col+dc[i];
        if(nrow>=0 && nrow<image.size() && ncol>=0 && ncol<image[0].size() && image[nrow][ncol]==image[row][col] && vis[nrow][ncol]==0){
            ans[nrow][ncol]=color;
            dfs(nrow,ncol,image,ans,vis,dr,dc,color);
        }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       vector<vector<int>> ans(image.size(),vector<int>(image[0].size()));
       for(int i=0;i<image.size();i++){
        for(int j=0;j<image[0].size();j++){
            ans[i][j]=image[i][j];
        }
       } 
        int n=image.size();
      int m=image[0].size();
      int dr[]={0,0,1,-1};
      int dc[]={1,-1,0,0};
      vector<vector<int>> vis(n,vector<int> (m,0));
    //    for(int i=0;i<image.size();i++){
    //     for(int j=0;j<image[0].size();j++){
    //         if(vis[i][j]==0 && image[i][j]==1)
            dfs(sr,sc,image,ans,vis,dr,dc,color);
    //     }
    //    } 
    //    queue<pair<int,int>> q;
    //    q.push({sr,sc});
    //    int dr[]={1,0,-1,0};
    //    int dc[]={0,1,0,-1};
    //    while(!q.empty()){
    //     int row=q.front().first;
    //     int col=q.front().second;
    //     ans[row][col]=color;
    //         q.pop();
    //         for(int i=0;i<4;i++){
    //             int nrow=row+dr[i];
    //             int ncol=col+dc[i];
    //             if(nrow>=0 && ncol>=0 && nrow<image.size() && ncol<image[0].size() && image[row][col]==image[nrow][ncol] && ans[nrow][ncol]!=color ){
    //    ans[nrow][ncol]=color;
    //    q.push({nrow,ncol});
    //             }
    //         }
    //    }
       return ans;
    }
};
