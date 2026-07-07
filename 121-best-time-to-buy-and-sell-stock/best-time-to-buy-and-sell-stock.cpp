class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int bb= prices[0];
        int ans=0;

        for(int i=1;i<n;i++){
            if(bb>prices[i]){
                bb=prices[i];
            }
        ans = max(ans, prices[i]-bb);
        }

        return ans;
    }
};