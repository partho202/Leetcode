//-----------राधा-----------//
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
         if(nums.size() <= 2) { // question a bola assa j 1,2 size er arary hoila no change
            return nums.size();
        }

        int k = 2;
        
        for(int i = 2 ; i < nums.size() ; i++){
            if(nums[i]!= nums[k-2]){ 
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
