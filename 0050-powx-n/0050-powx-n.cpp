class Solution {
public:
    double myPow(double x, int n) {
        double pow = 1;
        long long N = n; 
        
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        while (N > 0) {
            if ((N & 1) != 0) {
                pow *= x;
            }
            x *= x;
            N >>= 1; 
        }

        return pow;
    }
};
