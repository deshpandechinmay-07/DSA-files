class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;
        double logValue = log2(n);
        return (logValue == (int)logValue);
    }
};
