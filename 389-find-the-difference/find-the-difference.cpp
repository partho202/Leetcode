//-----------राधा-----------//
class Solution {
public:
    char findTheDifference(string s, string t) {
        for(int i = 0 ; i< s.size() ; i++){
            t[i+1]+=t[i]-s[i]; // here t er value update hoissa sum kora er por and ei update value print hoissa last a..
        }
        return t[t.size()-1]; // and eita last t er size - 1 retuen value print korba t er because array start from 0 that's why size()-1 kora hoisa na hoila out of index hoiya jaba
    }
};