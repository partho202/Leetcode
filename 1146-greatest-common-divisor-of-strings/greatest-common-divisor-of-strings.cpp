//-----------राधा-----------// 
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if( str1+ str2 != str2 + str1){ // and here if str1+ str2 and str2 + str1 not equall to then it's simply print empty string because not concatined more times..
            return "";
        }else{
            return str2.substr(0,gcd(str1.size(),str2.size()));
            // here you can write st1.sbustr() or str2.substr() and substr() is a function of string and print length of the string like str1 = "AAAB" and use str1.substr(0,2) the print "AAA"
        }

    }
};

