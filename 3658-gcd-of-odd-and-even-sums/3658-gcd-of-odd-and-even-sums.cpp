class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int o=n*n;
        int e=n*(n+1);
        while(e>0 && o>0){
        if(e>o) e=e%o;
        else o=o%e;
        }
        if(e==0) return o;
        else return e;
        
    }
};
