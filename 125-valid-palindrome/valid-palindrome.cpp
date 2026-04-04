class Solution {
public:
    bool helper_func(int start ,int end, string &s){
        if ( start >= end) return true;

        if(s[start] != s[end]) return false;

        return helper_func(start + 1, end - 1, s);
    }
    bool isPalindrome(string s) {
        string str="";
        for(char c:s){
            if(isalnum(c)){
                str+=tolower(c);
            }
        }

        int left=0;
        int right=str.size()-1;
        return helper_func(left, right , str);
    }
};