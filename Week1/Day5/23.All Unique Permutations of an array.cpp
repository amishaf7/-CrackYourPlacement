void solve(int index,vector<int> &arr ,int n,set<vector<int>> &s){
      if(index==n)
      s.insert(arr);
      
      for(int i=index;i<n;i++){
         swap(arr[i],arr[index]);
         solve(index+1,arr,n,s);
         swap(arr[i],arr[index]);
      }
  }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        vector<vector<int>> ans;
        set<vector<int>> s;
        solve(0,arr,n,s);
        for(auto it:s)
        ans.push_back(it);
        return ans;
    }
