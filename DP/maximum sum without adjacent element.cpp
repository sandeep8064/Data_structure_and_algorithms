int solution(int ind,vector<int> &nums,vector<int> &dp)
{
    if(ind==0)
    return nums[ind];
    if(ind<0)
     return 0;
    if(dp[ind]!=-1)
      return dp[ind];
    
    int pick = nums[ind]+solution(ind-2,nums,dp);
    int notpick = 0+solution(ind-1,nums,dp);
    
    return dp[ind] = max(pick,notpick);
    
    
}



int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
   
    int n = nums.size();
    vector<int> dp(n+1,-1);
    int ans;
    ans = solution(n-1,nums,dp);
    return ans;
}