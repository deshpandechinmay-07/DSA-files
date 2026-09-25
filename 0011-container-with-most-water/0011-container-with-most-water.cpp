class Solution {
public:
    int maxArea(vector<int>& height) {
        int rp = height.size() - 1, lp = 0, cs = 0, ms = 0, d = 0, h = 0;
        
        while (lp < rp) {
            d = rp - lp;
            h = min(height[lp], height[rp]);
            cs = d * h;
            ms = max(cs, ms); 
            if (height[lp] < height[rp]) {
                lp++;
            } else {
                rp--;
            }
        }
        return ms;
    }
};
