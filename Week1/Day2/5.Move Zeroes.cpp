class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int j=0;
    for(int i=0;i<nums.size();i++){
    if(nums[i]!=0){
    nums[j]=nums[i];
    j++;
    }
    }
    for(int k=j;k<nums.size();k++){
    nums[j]=0;
    j++;
    }
    return ;
    }
};
