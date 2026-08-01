class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int, int> hash;
        int zero = 0;
        int one = 0;
        int res = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) zero++;
            else one++;
            int diff = (zero - one);
            if (diff == 0) {
                res = max(res, i+1);
                continue;
            }
            if (hash.find(diff) == hash.end()) {
                hash[diff] = i;
            } 
            else {
                int len = i - hash[diff];
                res = max(res, len);
            }
        }
        return res;
    }
};