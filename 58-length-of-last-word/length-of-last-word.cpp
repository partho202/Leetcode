//-----------राधा-----------//
class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int n = s.size();
        int count = 0;

        int i = n - 1;

        // trailing spaces skip
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // last word count
        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};