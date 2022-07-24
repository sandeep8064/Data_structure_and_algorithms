int solution(int ind , vector<int> &height, vector<int> &dp)
{
    if(ind==0)
      return 0;
    if(dp[ind]!=-1)
     return dp[ind];
    int left = solution(ind-1,height,dp) + abs(height[ind]-height[ind-1]);
    int right = INT_MAX; //cause right may not execute always
    if(ind>1)
    right = solution(ind-2,height,dp)+abs(height[ind]-height[ind-2]);
    
    return dp[ind]=min(left,right);
}





int frogJump(int n, vector<int> &height)
{
    // Write your code here.
    vector<int> dp(n+1,-1);
    return solution(n-1,height,dp);
}