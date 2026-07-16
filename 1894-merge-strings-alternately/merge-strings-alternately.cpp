//-----------राधा-----------// 
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string marged="";
        int i = 0;
        while( i < word1.size() || i < word2.size() ){
           
            if(i < word1.size()){
                marged+=word1[i];
            }
            if(i < word2.size()){
                marged+=word2[i];
            }
            i++;
        }
        return marged;
    }
};