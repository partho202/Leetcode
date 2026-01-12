class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;

        for(int i = 5; i<=n;i=i*5){
            int value = n/i;
            if(value!=0){
                count+=value;
            }else{
                break;
            }
        }
        return count;
    }
};