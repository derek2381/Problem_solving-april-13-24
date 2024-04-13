// problem link
// https://leetcode.com/contest/biweekly-contest-128/problems/score-of-a-string/

class Solution {
public:
    int scoreOfString(string s) {
        int val = 0;
        for(int i = 0; i< s.length()-1;i++){
            val += abs(int(s[i]) - int(s[i+1]));
        }


        return val;
    }
};
