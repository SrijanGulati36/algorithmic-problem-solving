class Solution {
public:
    string removeDuplicates(string s, int k) {
        string ans="";
        vector<int> pos;

        for(int i=0;i<s.length();i++){
            if(ans.empty()||ans.back() != s[i]){
                    ans.push_back(s[i]);
                    pos.push_back(1);
            }
            else{
                pos.push_back(pos.back()+1);
                ans.push_back(s[i]);
            }

        if(pos.back()==k){
           for(int j=0;j<k;j++){
            ans.pop_back();
            pos.pop_back();
           }
        }    
        }

        return ans;
    }
};