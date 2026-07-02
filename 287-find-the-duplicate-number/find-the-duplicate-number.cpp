class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int n=nums.size();
        int i=0;
        
       while(i<n){
         int CI= nums[i]-1;
         if(nums[i] != nums[CI]){
            swap(nums[i],nums[CI]);
         }
         else{
            if(i != CI){
                return CI+1;
            }
            else{
                i++;
            }
         }
       }

        return -1;
    }
};