class Solution {
public:

int checkPalin(string s, int st, int end, int size){
    int count=0;
    
    while((st>=0) && (end<size)){
         if(s[st]==s[end]){
            count++;
            st--;
            end++;
         }
         else{
            break;
         }
    }

    return count;
}

    int countSubstrings(string s) {
        int n=s.length();
        int totalAns=0;

        for(int i=0;i<n;i++){
            int oddAns= checkPalin(s,i,i,n);

            int EvenAns= checkPalin(s,i,i+1,n);

           totalAns= totalAns+oddAns+EvenAns; 
        }

        return totalAns;
    }
};