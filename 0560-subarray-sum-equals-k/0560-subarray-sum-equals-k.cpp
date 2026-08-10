class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        int count = 0;
        unordered_map <int,int> checker;
        checker[0] = 1;

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            int required = sum - k;

            if (checker.find(required) != checker.end()) {
                count += checker[required];
            }

            checker[sum]++;
        }
        return count;
    }
};