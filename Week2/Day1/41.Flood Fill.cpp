class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
       vector<vector<int>> ans(image.size(),vector<int>(image[0].size()));
       for(int i=0;i<image.size();i++){
        for(int j=0;j<image[0].size();j++){
            ans[i][j]=image[i][j];
        }
       } 
       queue<pair<int,int>> q;
       q.push({sr,sc});
       int dr[]={1,0,-1,0};
       int dc[]={0,1,0,-1};
       while(!q.empty()){
        int row=q.front().first;
        int col=q.front().second;
        ans[row][col]=color;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow=row+dr[i];
                int ncol=col+dc[i];
                if(nrow>=0 && ncol>=0 && nrow<image.size() && ncol<image[0].size() && image[row][col]==image[nrow][ncol] && ans[nrow][ncol]!=color ){
       ans[nrow][ncol]=color;
       q.push({nrow,ncol});
                }
            }
       }
       return ans;
    }
};
