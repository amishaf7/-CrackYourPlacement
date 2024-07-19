class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // int n = nums.size();
        // sort(nums.begin(), nums.end());
        // vector<vector<int>> output;
        // for(int i=0; i<n-3; i++){
        //     for(int j=i+1; j<n-2; j++){
        //         long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
        //         int low = j+1, high = n-1;
        //         while(low < high){
        //             if(nums[low] + nums[high] < newTarget){
        //                 low++;
        //             }
        //             else if(nums[low] + nums[high] > newTarget){
        //                 high--;
        //             }
        //             else{
        //                 output.push_back({nums[i], nums[j], nums[low], nums[high]});
        //                 int tempIndex1 = low;
        //                 while(low < high && nums[low] == nums[tempIndex1]) low++;
        //                 // while(low < high && nums[high] == nums[tempIndex2]) high--;
        //             }
        //         }
        //         while(j+1 < n && nums[j] == nums[j+1]) j++;
        //     }
        //     while(i+1 < n && nums[i] == nums[i+1]) i++;
        // }
        // return output;
       vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j=i+1; j<nums.size(); j++){
                if(j>i+1 && nums[j] == nums[j-1]) continue;
                int k=j+1;
                int l=nums.size() - 1;
                while(k<l){
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if(sum<target){
                        k++;
                    }
                    else if(sum>target){
                        l--;
                    }
                    else{
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k] == nums[k-1]) k++;
                        //while(k<l && nums[l] == nums[l+1]) l--;
                    }
                }
            }
        }
        return ans;
    }
};

