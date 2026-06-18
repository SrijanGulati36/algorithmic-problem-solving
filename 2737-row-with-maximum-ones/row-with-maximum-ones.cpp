class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int Max_Count = INT_MIN;
        int index = 0;

        int n=mat.size();

        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1) {
                    count++;
                }
            }
            if (count > Max_Count) {
                Max_Count = count;
                index = i;
            }
        }

        return {index,Max_Count};
    }
};