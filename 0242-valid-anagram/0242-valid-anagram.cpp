class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> seenS;
        unordered_map<char, int> seenT;

        for (char x : s) {
            seenS[x]++;
        }

        for (char x : t) {
            seenT[x]++;
        }

        if (seenS == seenT)
            return true;

        return false;
    }
};