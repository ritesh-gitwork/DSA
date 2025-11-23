class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 0);
        int posIndex = 0, negIndex = 1;

        // Loop through the original array
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                // Place negative numbers at odd indices
                ans[negIndex] = nums[i];
                negIndex += 2;
            } else {
                // Place positive numbers at even indices
                ans[posIndex] = nums[i];
                posIndex += 2;
            }
        }

        return ans;
    
    }
};