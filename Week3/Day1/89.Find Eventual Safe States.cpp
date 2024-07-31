class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
      vector<int> list1[graph.size()];
      vector<int> indegree(graph.size(),0);
      for(int i=0;i<graph.size();i++){
        for(int j=0;j<graph[i].size();j++){
            int a=graph[i][j];
            list1[a].push_back(i);
            indegree[i]++;
        }
      }  
      queue<int> q;
      for(int i=0;i<graph.size();i++){
        if(indegree[i]==0)
        q.push(i);
      }
      vector<int> ans;
      while(!q.empty()){
        int a=q.front();
        q.pop();
        ans.push_back(a);
        for(auto it:list1[a]){
            indegree[it]--;
            if(indegree[it]==0)
            q.push(it);
        }
      }
sort(ans.begin(),ans.end());
return ans;
    }
};
