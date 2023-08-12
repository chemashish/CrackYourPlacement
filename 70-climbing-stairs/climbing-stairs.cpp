class Solution {
    int solve(int i,vector<int> &dp){
        if(i<0) return 0;
        if(i==0) return 1;
        if(dp[i]!=0) return dp[i];
        return dp[i]=solve(i-1,dp)+solve(i-2,dp);
    }
public:
    int climbStairs(int n) {
        long prev2 = 1;
          long prev = 1;
          
          for(int i=2; i<=n; i++){
              long cur_i = prev2+ prev;
              prev2 = prev;
              prev= cur_i;
          }
          return prev;
    }
};