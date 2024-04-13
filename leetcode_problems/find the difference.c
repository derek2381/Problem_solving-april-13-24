// problem link
// https://leetcode.com/problems/find-the-difference/description/

class Solution {
public:
    char findTheDifference(string s, string t) {
        char c = ' ';

        for(char i : s){
            c ^= i;
        }

        for(char i : t){
            c ^= i;
        }

        return tolower(c);
    }
};
