class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans(n);
        int j=0;

        k=k%n;

        for(int i=n-k;i<n;i++){
           ans[j]=nums[i];
           j++;
        }

        for(int i=0;i<n-k;i++){
            ans[j]=nums[i];
            j++;
        }

        nums=ans;
    }
};