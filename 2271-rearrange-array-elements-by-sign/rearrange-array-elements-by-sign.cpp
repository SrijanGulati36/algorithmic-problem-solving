class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;

        int n=nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }

            else{
                neg.push_back(nums[i]);
            }
        }

        vector<int> ans(n);

        for(int i=(n-1);i>=0;i--){
            if((i%2)==0){
                ans[i]=pos.back();
                pos.pop_back();
            }
            else{
                ans[i]= neg.back();
                neg.pop_back();
            }

        }
        return ans;
    }
};