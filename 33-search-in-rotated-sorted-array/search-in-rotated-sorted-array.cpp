class Solution {
public:
    int Pivot(vector<int>& arr) {
        int n = arr.size();
        int s = 0, e = n - 1;

        while (s <= e) {

            if (s == e) {
                return s;
            }

            int mid = s + (e - s) / 2;
            if (mid + 1 < n && arr[mid] > arr[mid + 1]) {
                return mid;
            } else if (mid - 1 >= 0 && arr[mid] < arr[mid - 1]) {
                return mid - 1;
            } else if (arr[mid] < arr[s]) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        return -1;
    }

    int BinaryS(vector<int>& nums, int s, int e, int target) {
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int Pelem = Pivot(nums);

        int ans = -1;
        if (nums[0] > target) {
            ans = BinaryS(nums, Pelem + 1, n-1, target);

        } else {
            ans = BinaryS(nums, 0, Pelem, target);
        }

        return ans;
    }
};