class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        vector<int>nums=num;
        int s=0;
        int e=nums.size()-1;
        
        sort(nums.begin(),nums.end());
        vector<int> v;
        int c,d;
        while(s<=e){
            if(nums[s]+nums[e]==target){
                c=nums[s];
                d=nums[e];
                break;
            }
            else if(nums[s]+nums[e]>target)
            e--;
            else
            s++;
        }
        for(int i=0;i<num.size();i++){
            if(num[i]==c){
                v.push_back(i);
                break;
            }
        }
          for(int i=num.size()-1;i>=0;i--){
            if(num[i]==d){
                v.push_back(i);
                break;
            }
        }
        return v;
    }
};
