class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int, int> counts;

        for (int i = 0; i < n; i++) {
            counts[nums[i]]++;
        }
        n = n/2;

        for (auto x: counts) {
            if (x.second > n) {
                return x.first;
            }
        }
        return 0;
    }
};