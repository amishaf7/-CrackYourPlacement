int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	   // int dr[]={1,2,2,1,-1,-2,-2,-1};
	   // int col[]={2,1,-1,-2,-2,-1,1,2};
	   // int x=KnightPos[0]-1;
	   // int y=KnightPos[1]-1;
	   // vector<vector<int>> vis(KnightPos.size(),vector<int> (KnightPos[0].size(),0));
	   // priority_queue<pair<int,pair<int,int>> , vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> q;
	   // q.push({x,y});
	   // vis[x][y]=1;
	   // while(!q.empty()){
	   //     int steps=q.top().first.first;
	   //     int b=q.top().second.first;
	   //     int c=q.top().second.first;
	   //     if(b==TargetPos[0] && c=TargetPos[1])
	   //     return steps;
	   //     for(int i=0;i<8;i++){
	   //         int row=b+dr[i];
	   //         int col=c+dc[i];
	   //         if(row>=0 && row<KnightPos.size() && col>=0 && col<Knight[0].size()&& vis[row][col]==0){
	   //             vis[row][col]=1;
	   //             q.push({steps+1,{row,col}});
	   //         }
	   //     }
	        
	   // }
	   // return -1;
	   int dr[] = {1, 2, 2, 1, -1, -2, -2, -1};
        int dc[] = {2, 1, -1, -2, -2, -1, 1, 2};
        
        int x = KnightPos[0] - 1;
        int y = KnightPos[1] - 1;
        
        vector<vector<int>> vis(N, vector<int>(N, 0));
        queue<pair<int, pair<int, int>>> q;
        
        q.push({0, {x, y}});
        vis[x][y] = 1;
        
        while (!q.empty()) {
            int steps = q.front().first;
            int b = q.front().second.first;
            int c = q.front().second.second;
            q.pop();
            
            if (b == TargetPos[0] - 1 && c == TargetPos[1] - 1) {
                return steps;
            }
            
            for (int i = 0; i < 8; i++) {
                int row = b + dr[i];
                int col = c + dc[i];
                
                if (row >= 0 && row < N && col >= 0 && col < N && vis[row][col] == 0) {
                    vis[row][col] = 1;
                    q.push({steps + 1, {row, col}});
                }
            }
        }
        
        return -1;
	}
