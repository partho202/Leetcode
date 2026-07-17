//-----------राधा-----------//
class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int i = 0;
        
        int initial = nums[i];
        
        int end = nums[nums.size()-1];
        
        return gcd(initial,end); 
    }
};