class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        long long nSquare = n*n;

        long long actualSum = 0;
        long long actualSquareSum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                actualSum += grid[i][j];
                actualSquareSum += grid[i][j] * grid[i][j];
            }
        }

        
        long long expectedSum = nSquare * (nSquare + 1) /2;
        long long expectedSquareSum = nSquare * (nSquare + 1) * (2* nSquare + 1) / 6;

        //A-B
        long long diffAB = actualSum - expectedSum;
        //A2-B2
        long long diffSquareAB = actualSquareSum - expectedSquareSum;
        //A+B
        long long sumAB = diffSquareAB / diffAB;

        int a = (diffAB + sumAB) /2;
        int b = (sumAB - diffAB) /2;
        return {a,b};
    }
};