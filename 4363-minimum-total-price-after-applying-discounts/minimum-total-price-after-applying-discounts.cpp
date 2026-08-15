//-----------राधा-----------//
class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());
        
        double ans = 0;
        
        for(int i = 0; i < prices.size(); i++){
           
            if(i < discounts.size()) {
                
                double finalPrice = (prices[i] * (100.0-discounts[i]) /100.0);
                ans += finalPrice;
            
            } else {
               
                ans += prices[i];
            }
        }
        
        return ans;
    }
};