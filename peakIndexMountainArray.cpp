class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0, high = arr.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] < arr[mid + 1]) {
                // Peak lies on the right side
                low = mid + 1;
            } else {
                // Peak lies on the left side (or at mid)
                high = mid;
            }
        }

        return low; // or high, both are same
    }
};
