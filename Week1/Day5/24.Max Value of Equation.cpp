class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        // int n=points.size();
        // int ans=INT_MIN;
        // for(int i=0;i<n-1;i++){
        //     int j=i+1;
        //     while(j<n && abs(points[i][0]-points[j][0])<=k)
        //     {
        //         ans=max(ans,points[i][1]+points[j][1]+abs(points[i][0]-points[j][0]));
        //         j++;
        //     }
        // }
        // return ans;
        int n = points.size();
        int ans = INT_MIN;
        priority_queue<pair<int, int>> maxHeap; // max-heap to store pairs of (yi - xi, xi)
        
        for (int i = 0; i < n; ++i) {
            // Remove points from the heap that are out of the range of k
            while (!maxHeap.empty() && points[i][0] - maxHeap.top().second > k) {
                maxHeap.pop();
            }
            
            // If the heap is not empty, update the answer
            if (!maxHeap.empty()) {
                ans = max(ans, maxHeap.top().first + points[i][1] + points[i][0]);
            }
            
            // Add the current point to the heap
            maxHeap.push({points[i][1] - points[i][0], points[i][0]});
        }
        
        return ans;
    
    }
};
