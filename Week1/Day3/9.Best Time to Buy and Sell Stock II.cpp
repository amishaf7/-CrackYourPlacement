class Solution {
public:
int solve(int i,int buy,vector<vector<int>> &dp,vector<int> &prices){
    if(i==prices.size())
    return 0;
    if(dp[i][buy]!=-1){
            return dp[i][buy];
        }
       
    if(buy==1){
  return dp[i][buy]=max((-1)*prices[i]+solve(i+1,0,dp,prices),solve(i+1,1,dp,prices));
    }
   else{
      return dp[i][buy]=max(prices[i]+solve(i+1,1,dp,prices),solve(i+1,0,dp,prices)) ; 
    }
    
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return solve(0,1,dp,prices);
    }
};
