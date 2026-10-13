class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        
        vector<int> n;
        int temp = x;
        while (temp > 0) {
            n.push_back(temp % 10);
            temp /= 10;
        }
        
        int a = 0, b = n.size() - 1;
        while (a < b) {
            if (n[a] != n[b]) {
                return false;
            }
            a++;
            b--;
        }
        return true;
    }
};
