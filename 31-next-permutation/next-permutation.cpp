#include <vector>
#include <algorithm> // for reverse, swap
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return;

        // 1) find pivot: first index from right where nums[i] < nums[i+1]
        int index = -1;
        for (int i = n - 2; i >= 0; --i) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        // 2) if no pivot, array is highest permutation -> reverse to lowest
        if (index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // 3) find rightmost element greater than pivot and swap
        for (int i = n - 1; i > index; --i) {
            if (nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }

        // 4) reverse the suffix after pivot to get the next permutation
        reverse(nums.begin() + index + 1, nums.end());
    }
};
