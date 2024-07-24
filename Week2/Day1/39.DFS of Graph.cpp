void dfs(int node,int V, vector<int> adj[],vector<int> &vis,vector<int> &ans){
        vis[node]=1;
        ans.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it])
            dfs(it,V,adj,vis,ans);
        }
        return ;
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        vector<int> vis(V,0);
        dfs(0,V,adj,vis,ans);
        return ans;
    }
