class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) return mid;

            // Left half sorted
            if (nums[low] <= nums[mid]) {
                if (nums[low] <= target && target < nums[mid]) {
                    high = mid - 1; // target in left
                } else {
                    low = mid + 1; // target in right
                }
            } 
            // Right half sorted
            else {
                if (nums[mid] < target && target <= nums[high]) {
                    low = mid + 1; // target in right
                } else {
                    high = mid - 1; // target in left
                }
            }
        }

        return -1;
    }
};
