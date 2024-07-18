class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0;
        int k=0;
        int j=nums.size()-1;
        while(k<=j){
           if(nums[k]==0)
           {
            swap(nums[i],nums[k]);
            i++;
            k++;
           }
           else if(nums[k]==2){
            swap(nums[j],nums[k]);
            j--;
           }
           else
           k++;
        }
        return;
    }
};
