class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        for (int a = 0; a <= n - 4; a++) {
            if (a > 0 && nums[a] == nums[a - 1]) {
                continue;
            }

            for (int b = a + 1; b <= n - 3; b++) {
                if (b > a + 1 && nums[b] == nums[b - 1]) {
                    continue;
                }
                int d = n - 1;
                int c = b + 1;
                while (c < d) {

                    long long sum = 1LL* nums[a] + nums[b] + nums[c] + nums[d];
                    if (sum == target) {
                        ans.push_back({nums[a], nums[b], nums[c], nums[d]});
                        c++, d--;

                        while (c < d && nums[c] == nums[c - 1]) {
                            c++;
                        }
                        while (c < d && nums[d] == nums[d + 1]) {
                            d--;
                        }
                    } else if (sum > target) {
                        d--;
                    } else {
                        c++;
                    }
                }
            }
        }

        return ans;
    }
};