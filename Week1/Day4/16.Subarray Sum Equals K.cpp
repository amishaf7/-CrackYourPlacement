class Solution {
public:
    int subarraySum(vector<int>& arr, int sum) {
         unordered_map<int, int> prevSum;
 int n=arr.size();
    int res = 0;
    int currSum = 0;
 
    for (int i = 0; i < n; i++) {
         currSum += arr[i];
          if (currSum == sum)
            res++;
             if (prevSum.find(currSum - sum) != prevSum.end())
            res += (prevSum[currSum - sum]);

        prevSum[currSum]++;
    }
 
    return res;
    }
};
