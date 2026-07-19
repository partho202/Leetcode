//-----------राधा-----------//
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int n = nums.size();
        
        int sum = 0;
        vector<int>v(n);
        
        for(int i = 0 ; i < n ; i++){
            
            sum+=nums[i];

            v[i]+=sum;
        }
        return v ;
    }
};