class Solution {
public:
    bool judgeSquareSum(int c) {
        long long a = 0;
        long long b = sqrt(c);
        
        while (a <= b) {
            long long current_sum = a * a + b * b;
            
            if (current_sum == c) {
                return true;
            } else if (current_sum < c) {
                a++;
            } else {
                b--;
            }
        }
        return false;
    }
};
