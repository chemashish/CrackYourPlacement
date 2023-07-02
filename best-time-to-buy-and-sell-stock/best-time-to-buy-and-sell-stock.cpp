class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int n=prices.size();
        int mini=10000,maxi=-1;
        for(int i=0;i<n-1;i++){
            if(i==0){
               mini=prices[0];
               maxi=prices[0];
            }
               
            else if(prices[i-1]>=prices[i] && prices[i]<=prices[i+1]){
                if(prices[i]<mini){
                    mini=prices[i];
                    maxi=-1;
                }
            }else if(prices[i-1]<=prices[i] && prices[i]>=prices[i+1]){
                if(prices[i]>maxi){
                    maxi=prices[i];
                }
            }
            profit=max(profit,maxi-mini);
        }

        return profit=max(profit,prices[n-1]-mini);
    }
};