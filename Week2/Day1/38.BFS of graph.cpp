vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        vector<int> ans;
        queue<int> q;
        q.push(0);
           vis[0]=1;
        while(!q.empty()){
            int a=q.front();
            q.pop();
            ans.push_back(a);
            for(auto it:adj[a]){
                if(!vis[it]){
                    vis[it]=1;
                q.push(it);
                }
            }
        }
        return ans;
    }
