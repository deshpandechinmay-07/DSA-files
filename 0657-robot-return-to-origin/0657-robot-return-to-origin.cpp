#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        vector<char> a(moves.begin(), moves.end());
        int vertical = 0;
        int horizontal = 0;
        
        for (char m : a) {
            if (m == 'U') vertical++;
            if (m == 'D') vertical--;
            if (m == 'R') horizontal++;
            if (m == 'L') horizontal--;
        }
        
        if (vertical == 0 && horizontal == 0) {
            return true;
        }
        return false;
    }
};
