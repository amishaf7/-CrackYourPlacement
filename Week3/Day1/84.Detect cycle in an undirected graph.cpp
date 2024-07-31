bool bfs(int node,vector<int> adj[],vector<int> &vis){
        vis[node]=1;
        queue<pair<int,int>> q;
        q.push({node,-1});
        while(!q.empty()){
            int a=q.front().first;
            int b=q.front().second;
            q.pop();
            for(auto it:adj[a]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push({it,a});
                }
                else  if(it!=b){
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V,0);
        int count=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                count=bfs(i,adj,vis);
            }
            if(count==1)
            return true;
        }
        return false;
    }
