//-----------राधा-----------//
class Solution {
public:
    bool checkPowersOfThree(int n) {

        while(n>0){

           if(n%3 == 2){

            return false;
           
           }
           
           n /= 3;
        
        }
         return  true;
    }
};


/*
    n = 27

    27 % 3 == 2 false 

    27 / 3 = 9 then 

    9 > 0 true

    9 % 3 == 2 false

    9 / 3 = 3 then

    3 > 0 true

    3 % 3 == 2 false

    3 / 3 = 1

    1 > 0 true

    1 % 3 == 2 false

    1 / 3 = 0 

    0 > 0 false and loop break and retuen true...

*/