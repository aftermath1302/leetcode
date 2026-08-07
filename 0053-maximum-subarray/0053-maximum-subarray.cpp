class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0;
        int maxSum = INT_MIN;

        for (int c: nums) {
            currSum = max(c , currSum + c);
            maxSum = max(currSum, maxSum);
        }
        return maxSum;
    }
};