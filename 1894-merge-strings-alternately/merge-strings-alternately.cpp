//-----------राधा-----------//
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string result = "";
        
        int i = 0;
        
        string merg = word1 + word2 ;
        
        int n = merg.length(); // 6(for-tes1)
        
        while(n > i){
            
            if(i < word1.length()){
                result+=word1[i]; //0: "" + a now result = a; 1: ap+b result = apb 2: apbq+c result = apbqc
            }
            if(i< word2.length()){
                result+=word2[i]; // 0: a + p now result = ap; 1: apb + q result = apbq 2: apbqc+r result = apbqcr
            }
            i++; //0 1 2 3 4 5 6(break the loop when i = 6)
        }
        return result;
    }
};