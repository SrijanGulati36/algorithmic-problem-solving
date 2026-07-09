class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            int st = 0;
            int end = matrix[i].size() - 1;

            while (st <= end) {
                int mid = st + (end - st) / 2;

                if (matrix[i][mid] == target) {
                    return true;
                }
                else if (matrix[i][mid] < target) {
                    st = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
        }

        return false;
    }
};