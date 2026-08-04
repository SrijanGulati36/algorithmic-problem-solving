class Solution {
public:
    bool checkPalim(string s, int st, int end){
        while(st<end){
            if(s[st]==s[end]){
                st++;
                end--;
            }
            else{
                return false;
            }
        }

        return true;
    }
    bool validPalindrome(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;

        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                bool ans1= checkPalim(s,i+1,j);

                bool ans2= checkPalim(s,i,j-1);

                return ans1||ans2;
            }
        }

        return true;
    }
};