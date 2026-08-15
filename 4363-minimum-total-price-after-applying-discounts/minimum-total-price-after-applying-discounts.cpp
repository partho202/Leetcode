//-----------राधा-----------//
class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        
        int n = prices.size();
        int n1 = discounts.size();

        sort( prices.rbegin() , prices.rend() ) ;
        sort( discounts.rbegin() , discounts.rend() ) ;
        
        double sum = 0 ;
        int i = 0 ; 
        int j = 0 ;

        while(i < n && j < n1 ){
            sum += (double)( prices[i] * (double)(100-discounts[j]) / 100 ) ;
            i++;
            j++;
        }
        while ( i < n ) sum += prices[i++] ;
        return sum;
    }
};