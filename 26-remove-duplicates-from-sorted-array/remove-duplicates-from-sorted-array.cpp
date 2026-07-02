class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        int n=nums.size();

        for(int i=1;i<n;i++){
            if(nums[i] != nums[k-1]){
                swap(nums[i],nums[k]);
                k++;
            }
        }

        return k;
    }
};