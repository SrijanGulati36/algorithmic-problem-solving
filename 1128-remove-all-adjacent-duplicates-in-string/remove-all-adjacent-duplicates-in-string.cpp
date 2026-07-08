class Solution {
public:
    string removeDuplicates(string s) {
        int n=s.length();
        int i= n-2;

        while(i>=0){
            if(s[i]==s[i+1]){
                s.erase(i,2);
            }
            else{
                i--;
            }
        }

        return s;
    }
};