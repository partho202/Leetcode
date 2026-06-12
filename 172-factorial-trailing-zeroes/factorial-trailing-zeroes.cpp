//-----------राधा-----------//
class Solution {
public:
    int trailingZeroes(int n) {

        int ans = 0;

        while(n > 0){
            n /= 5;
            ans+=n;  // 6/5 = 1 and ans = ans + 1....ans = 0+1=1 ans = 1+0
            
        }

        return ans;
    }
};