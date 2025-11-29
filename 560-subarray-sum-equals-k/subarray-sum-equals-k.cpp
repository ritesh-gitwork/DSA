class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long,int> freq;
        freq[0] = 1;           // empty prefix
        long long pref = 0;
        long long ans = 0;

        for (int x : nums) {
            pref += x;
            long long need = pref - k;
            if (freq.find(need) != freq.end()) {
                ans += freq[need];
            }
            freq[pref]++;     // record current prefix
        }

        return (int)ans;
    }
    
};