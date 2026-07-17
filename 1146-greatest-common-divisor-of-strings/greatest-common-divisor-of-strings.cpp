//-----------राधा-----------//
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        if((str1+str2) != (str2+str1)){ // here check two string index matching 
            return "";
        }else{
            return str1.substr(0,gcd(str1.size(),str2.size()));
        }

    }
};

//tc-04 str1+str2 = AAAAABAAA then str2+str1 = AAAAAAAAB so here two string index not matching that's why return "" empty  string