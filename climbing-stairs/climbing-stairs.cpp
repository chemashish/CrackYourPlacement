class Solution {
    int solve(int i,vector<int> &dp){
        if(i<0) return 0;
        if(i==0) return 1;
        if(dp[i]!=0) return dp[i];
        return dp[i]=solve(i-1,dp)+solve(i-2,dp);
    }
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,0);
        return solve(n,dp);
    }
};