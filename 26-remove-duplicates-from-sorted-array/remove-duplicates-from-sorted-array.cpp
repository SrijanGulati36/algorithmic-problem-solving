class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n= nums.size();

        vector <int> ans;
        int index=0;

        int k=0;
       
        for(int i=0;i<n;i++){
            if(ans.empty() || ans.back()!= nums[i]){
                ans.push_back(nums[i]);
                k++;
                //index++;
            }
        }

        nums=ans;

        return k;
    }
        
};