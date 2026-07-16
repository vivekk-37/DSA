class Solution {
public:
    bool check(int i,string &s){
        if(i>=s.size()/2) return true;
        if(s[i]!=s[s.size()-i-1]) return false;
        return check(i+1,s);
    }
    bool isPalindrome(string s) {
        string str = "";
         for (int i = 0; i < s.size(); i++) {
            if (isalnum(s[i])) {
            str += tolower(s[i]);
            }
         }

       return check(0,str); 
    }
};