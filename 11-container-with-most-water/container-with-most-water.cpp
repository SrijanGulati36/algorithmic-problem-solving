class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int i=0,j=n-1;
        int ans= INT_MIN;

        while(i<j){
            int h= min(height[i],height[j]);
            int w= j-i;
            int A= h*w;
            ans = max(ans, A);

            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }

        return ans;
        
    }
};