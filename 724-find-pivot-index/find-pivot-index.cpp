class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n=nums.size();
        int TSum=0;

        for(int i=0;i<n;i++){
            TSum += nums[i];
        }

        int LSum=0;

        for(int i=0;i<n;i++){
            TSum -= nums[i];

            if(TSum==LSum){
                return i;
            }
            else{
                LSum += nums[i];
            }
        }

        return -1;
        
    }
};