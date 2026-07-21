class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int length = rows*cols;
        int s=0, e=length-1;
        
        while(s<=e){
            int mid= s+(e-s)/2;
            int r=mid/cols;
            int c= mid%cols;

            if(matrix[r][c]==target){
                return true;
            }
            else if(matrix[r][c]> target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        
            return false;

    }
};