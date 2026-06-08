//-----------राधा-----------//
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        while(n%3==0){
            n/=3;
        }
        return n == 1; 
    }
};


/*

    here are the same process of power of two,four

    when n = 9.....

    9 % 3 == 0 true

    9 / 3 = 3 now n = 3

    3 % 3 == 0 true

    3 / 3 = 1 now n = 1 

    and 1 % 3 == 0 false

    and return n == 1 ture

    so, n = 9 ans is true.....

    .. that's problem main idea is check how much mode the number and after mode when n == 1 then answer is true..i mean check how much mode the number....
*/