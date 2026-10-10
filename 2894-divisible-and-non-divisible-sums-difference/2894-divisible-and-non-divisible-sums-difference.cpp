class Solution {
public:
    int differenceOfSums(int n, int m) {
        int cd=0,cnd=0;
        for(int i=1;i<n+1;i++)
        {
            if(i%m==0)
        {
          cd+=i;
        }
        else if(i%m!=0)
        {
            cnd+=i;
        }
    }
    return cnd-cd;
    }
};