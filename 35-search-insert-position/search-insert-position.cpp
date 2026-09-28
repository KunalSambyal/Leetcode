class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size() - 1;
        int MID = 0;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            MID = mid;
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }
        return lo;
    }
};