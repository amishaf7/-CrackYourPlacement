class Solution {
public:
void check(vector<int>& nums2){
    return sort(nums2.begin(),nums2.end());
}
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(nums1[i]>=nums2[j]){
          swap(nums1[i],nums2[j]);
          i++;
          check(nums2);
            }
            else{
                i++;
            }
        }
        while(j<m){
            nums1[i]=nums2[j];
            i++;
            j++;
        }
        return;
    }
};
