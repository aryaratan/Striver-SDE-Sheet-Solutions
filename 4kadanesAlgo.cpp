

https://leetcode.com/problems/maximum-subarray/


int maxSubArray(vector<int>& nums) {
    int cs = 0;     // current sum is 0 initially
    int ms=INT_MIN;     //max sum is negative infinty
    int n = nums.size();    // size of array
    for(int i=0;i<n;i++)    // traverse array
    {
        cs = cs + nums[i];  // current sum is previous sum + nums[i]
        ms = max(ms, cs);   // update maxsum as per requirment  
        if(cs<0)    // if current sum is negative then it will not give max sum so make it again 0
         cs = 0;
    }
        return ms;  // return maxSum
    }