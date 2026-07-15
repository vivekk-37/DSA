class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int org=x;
        while(x>0){
            int ld=x%10;
            rev=(rev*10)+ld;
            x=x/10;
            }

       return org==rev;

    }
};