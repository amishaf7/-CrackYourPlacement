class Solution {
public:
    bool solve(int index, vector<int>& nums, int n, vector<int>& memo) {
        if (index == n) return true;  // Base case: If index reaches the last index
        if (index > n) return false;
        if (nums[index] == 0) return false;  // If current index value is 0, no further jumps can be made
        if (memo[index] != -1) return memo[index];  // Return memoized result if available
        
        for (int i = index + 1; i <= index + nums[index]; i++) {
            if (solve(i, nums, n, memo)) {
                return memo[index] = true;  // Memoize the result before returning
            }
        }
        return memo[index] = false;  // Memoize the result before returning
    }
    
    bool canJump(vector<int>& nums) {
        int n = nums.size() - 1;
        vector<int> memo(nums.size(), -1);  // Initialize memoization array with -1
        return solve(0, nums, n, memo); 
    }
};
