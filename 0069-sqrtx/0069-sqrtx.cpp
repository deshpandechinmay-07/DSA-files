class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;
        
        int a = 1;
        int b = x / 2;
        int ans = 0;
        
        while (a <= b) {
            int mid = a + ((b - a) / 2);
            
            if (mid <= x / mid) {
                ans = mid;
                a = mid + 1;
            } else {
                b = mid - 1;
            }
        }
        return ans;
    }
};
