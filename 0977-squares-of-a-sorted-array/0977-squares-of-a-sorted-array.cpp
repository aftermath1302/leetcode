class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> neg;
        vector<int> pos;
        vector<int> res;

        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                neg.push_back(nums[i]);
            }
            else {
                pos.push_back(nums[i]);
            }
        }

        for (int i = 0; i < pos.size(); i++) {
            pos[i] *= pos[i];
        }
        for (int i = 0; i < neg.size(); i++) {
            neg[i] *= neg[i];
        }
        if (neg.size() == 0) {
            return pos;
        }

        reverse(neg.begin(), neg.end());
        if (pos.size() == 0) {
            return neg;
        }

        int low = 0;
        int high = 0;

        while (low < neg.size() && high < pos.size()) {
            if (neg[low] < pos[high]) {
                res.push_back(neg[low++]);
            } 
            else {
                res.push_back(pos[high++]);
            }
        }

        while (low < neg.size()) {
            res.push_back(neg[low++]);
        }
        while (high < pos.size()) {
            res.push_back(pos[high++]);
        }

        return res;

    }
};