class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> nums2(n);

        for (int offset = 0; offset < n; offset++) {
            int index = 0;
            for (int i = offset; i < n; i++) {
                nums2[index++] = nums[i];
            }
            for (int i = 0; i < offset; i++) {
                nums2[index++] = nums[i];
            }

            bool isSorted = true;
            for (int i = 0; i < n -1 ; i++) {
                if (nums2[i] > nums2[i+1]) {
                    isSorted = false;
                }
            }
            
            if (isSorted) {
                return true;
            }
        }
        return false;       
    }
};