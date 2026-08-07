class Solution {
public:
    double myPow(double x, int n) {
        long long binary = n;
        double res = 1;

        if (binary == 0) return 1;
        if (x == 0) return 0;
        if (x == 1) return 1;

        if (binary < 0) {
            x = 1/x;
            binary = -binary;
        }

        while (binary != 0) {
            if (binary % 2 == 1) {
                res *= x;
            }
            x *= x;
            binary /= 2;
        }
        return res;
    }
};