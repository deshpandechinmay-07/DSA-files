class Solution {
public:
    bool isPowerOfThree(int n) {
        // 1162261467 is 3^19. n must be positive and must cleanly divide 3^19.
        return n > 0 && 1162261467 % n == 0;
    }
};
