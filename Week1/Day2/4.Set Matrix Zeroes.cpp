class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      queue<pair<int,int>> q;int row=matrix.size();
        int col=matrix[0].size();
      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==0)
            q.push({i,j});
        }
      } 
      while(!q.empty()){
        int a=q.front().first;
        int b=q.front().second;
        q.pop();
        for(int j=0;j<col;j++){
            matrix[a][j]=0;
        }
        for(int i=0;i<row;i++){
            matrix[i][b]=0;
        }
      } 
      return;
    }
};
