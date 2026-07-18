class Solution {
public:
    vector <int> fndMaxMin(vector<int>& nums){
      int mn = INT_MAX, mx = INT_MIN;
      for(int i=0;i<nums.size();i++){
        if(nums[i]<mn) mn=nums[i];
        if(nums[i]>mx) mx=nums[i];
      }
      return {mn,mx};
    }
    int findGCD(vector<int>& nums) { 
       vector <int> result=fndMaxMin(nums);
       while(result[0]>0 && result[1]>0){
        if(result[1]>result[0]) result[1]=result[1]%result[0];
        else result[0]=result[0]%result[1];
       }
        if(result[1]==0) return result[0];
        else return result[1];  
    }
};