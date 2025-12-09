class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // mid ko hamesha even banao
            if (mid % 2 == 1) mid--;

            // Agar pair sahi bana hua hai (mid, mid+1 same)
            if (nums[mid] == nums[mid + 1]) {
                // single element right side me hoga
                low = mid + 2;
            } else {
                // yahan pattern toot gaya, single left side ya mid pe
                high = mid;
            }
        }

        // low == high -> single element ka index
        return nums[low];
    }
};
