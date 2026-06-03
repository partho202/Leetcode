//-----------राधा-----------//
class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n<=0){
            return false;
        }
        while(n % 2 ==0){
            n/=2;
        }

        return n == 1 ; // n 1 hoilai true hoba because 2^0 = 1...
    }
};