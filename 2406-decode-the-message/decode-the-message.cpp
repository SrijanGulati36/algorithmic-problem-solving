class Solution {
public:
    string decodeMessage(string key, string message) {
        char ans[300] = {0};
        char start = 'a';

        for (auto ch : key) {

            if (ch != ' ' && ans[ch] == 0) {
                ans[ch] = start;
                start++;
            }
        }

      string msg;

      for(auto decode: message){
        if(decode==' '){
            msg.push_back(' ');
        }
        else{
            msg.push_back(ans[decode]);
        }
      }
        return msg;
    }
};