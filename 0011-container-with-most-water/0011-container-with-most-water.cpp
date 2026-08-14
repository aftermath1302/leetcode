class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        long long left = 0;
        long long right = n - 1;
        long long resArea = 0;
        while (left <= right) {
            long long area = (right - left) * min(height[left], height[right]);
            resArea = max(area, resArea);
            if (height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return resArea;
    }
};