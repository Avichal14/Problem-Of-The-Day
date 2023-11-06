class Solution {
public:
    int solveR(vector<int>& coins, int amount){
        //BC
        if(amount==0){
            return 0;
        }
        if(amount <0){
            return INT_MAX;
        }
        int mini=INT_MAX;
        for(int i=0;i<coins.size();i++){
            int ans=solveR(coins,amount-coins[i]);

            if(ans!=INT_MAX){
                mini=min(mini,1+ans);
            }
        }
        return mini;
    }
    int solve(vector<int>& coins, int amount,vector<int>& dp){
        //BC
        if(amount==0){
            return 0;
        }
        if(amount < 0){
            return INT_MAX;
        }

        // ans already exist
        if(dp[amount]!=-1){
            return dp[amount];
        }


        int mini=INT_MAX;
        for(int i=0;i<coins.size();i++){
            int ans=solve(coins,amount-coins[i],dp);

            if(ans!=INT_MAX){
                mini=min(mini,1+ans);
            }
        }
        dp[amount]=mini;
        return dp[amount];
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-1);
        // int ans=solveR(coins,amount);
        // if(ans==INT_MAX){
        //     return -1;
        // }
        // return ans;
        int ans=solve(coins,amount,dp);
        if(ans==INT_MAX){
            return -1;
        }
        else{
            return ans;
        }
    }
};