class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int res = 0;
        int minDiff = INT_MAX;
        for (int i = 0; i < n - 2; i++) {
            int low = i + 1;
            int high = n - 1;
            while (low < high) {
                int sum = nums[i] + nums[low] + nums[high];
                int diff = abs(target - sum);

                if (sum == target) {
                    return sum;
                }

                // Update best answer
                if (diff < minDiff) {
                    minDiff = diff;
                    res = sum;
                }

                // Move pointer
                if (sum < target) {
                    low++;
                } else {
                    high--;
                }
            }
        }
        return res;
    }
};