class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans=-1;
        int n= arr.size();
        int st=0;
        int end=n-1;

        while(st<end){
            int mid= st+(end-st)/2;
            if(arr[mid]>arr[mid+1]){
                ans= mid;
                end=mid;
            }
            else{
                st=mid+1;
            }
        }

        return ans;
    }
};