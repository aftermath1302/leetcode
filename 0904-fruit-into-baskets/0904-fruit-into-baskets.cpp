class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0;
        int res = INT_MIN;
        unordered_map<int,int> hash;
        for (int high = 0; high < fruits.size(); high++) {
            hash[fruits[high]]++;
            while (hash.size() > 2) {
                hash[fruits[low]]--;
                if (hash[fruits[low]] == 0) {
                    hash.erase(fruits[low]);
                }
                low++;
            }
            int len = high - low + 1;
            res = max(res, len);
        }
        return res == INT_MIN ? 0 : res;
    }
};