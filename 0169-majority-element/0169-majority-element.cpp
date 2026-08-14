class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int res = nums[0];
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (count == 0) {
                count = 1;
                res = nums[i];
            }
            else if (res == nums[i]) {
                count++;
            }
            else {
                count--;
            }
        }
        return res;
    }
};