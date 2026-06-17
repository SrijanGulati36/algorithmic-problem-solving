class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();

        for(int i: nums){
            sum +=i;
        }

        int totalsum = (n * (n + 1)) / 2;

        int ans = totalsum-sum;

        return ans;
    }
};