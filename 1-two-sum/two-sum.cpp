class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int st = 0, end = 0;

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    st=i;
                    end=j;
                }
            }
        }
        return {st,end};
    }
    };