class Solution {
public:
    int solve(vector<int>& nums, int n){
        if(n<0) return 0;
        if(n==0) return nums[0];

        // include 
        int include = solve(nums,n-2) + nums[n];
        int exclude = solve(nums, n-1) + 0;

        return max(include,exclude);
    }

    int solveMemo(vector<int>& nums,int n, vector<int>& dp){
         if(n<0) return 0;
        if(n==0) return nums[0];

        if(dp[n]!=INT_MIN){
            return dp[n];
        }

        // include 
        int include = solveMemo(nums,n-2,dp) + nums[n];
        int exclude = solveMemo(nums, n-1,dp) + 0;

        dp[n]= max(include,exclude);
        return dp[n];
    }


    int rob(vector<int>& nums) {
        int n=nums.size()-1;
        // return solve(nums,n);

        vector<int> dp(n+1,INT_MIN);
        return solveMemo(nums,n,dp);
    }
};