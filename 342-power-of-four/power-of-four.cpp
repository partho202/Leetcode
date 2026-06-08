//-----------राधा-----------//
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
        while(n%4 == 0){
            
            n /= 4 ;
        }
        return n == 1 ;
    }
};


/* 
    when n = 16.....

    16 % 4 = 0 true

    16 / 4 = 4 now n = 4

    4 % 4 == 0 true 

    4 / 4 = 1 now n = 1

    and 1 % 4 == 0 false and 

    return n == 1 ture 

    and result is true....
*/