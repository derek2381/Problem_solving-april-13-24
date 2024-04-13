// problem link
// https://leetcode.com/problems/longest-nice-substring/description/


class Solution {
public:
    string longestNiceSubstring(string s) {

        if(s.size() < 2){
            return "";
        }

        unordered_set<char> us;

        for(char i : s){
            us.insert(i);
        }

        for(int i = 0; i <s.size();i++){
            if(us.count(tolower(s[i])) == true && us.count(toupper(s[i])) == true) continue;


            string prev = longestNiceSubstring(s.substr(0, i));
            string next = longestNiceSubstring(s.substr(i+1));

            string res = (prev.size() >= next.size()) ? prev : next;

            return res;
        }

        return s;



    }
};
