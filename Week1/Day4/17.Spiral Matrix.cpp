class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
      int n=matrix.size();
      int m=matrix[0].size();
      int count=0;
      int top=0;
      int right=m-1;
      int bottom=n-1;
      int left=0;
      while(count<m*n){
        for(int i=left;i<=right && count<m*n;i++){
            v.push_back(matrix[top][i]);
            count++;
        }
        top=top+1;
        for(int i=top;i<=bottom && count<m*n;i++){
            v.push_back(matrix[i][right]);
            count++;
        }
        right=right-1;
        for(int i=right;i>=left && count<m*n;i--){
           v.push_back(matrix[bottom][i]);
            count++;  
        }
        bottom=bottom-1;
        for(int i=bottom;i>=top && count<m*n;i--){
           v.push_back(matrix[i][left]);
            count++;  
        }
        left=left+1;
      }  
      return v;
    }
};
