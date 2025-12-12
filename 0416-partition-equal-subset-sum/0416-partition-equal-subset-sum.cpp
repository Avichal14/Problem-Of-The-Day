class Solution {
public:
    bool solve(int index,vector<int>& nums,int target){
        // Base case
        int n= nums.size();
        if(index>=n)
            return 0;
        if(target<0)
            return 0;
        if(target==0)
            return 1;

        bool include= solve(index+1,nums,target-nums[index]);
        bool exclude= solve(index+1,nums,target);

        return (include || exclude);
    }

    bool solveMem(int index,vector<int>& nums,int target, vector<vector<int>> &dp){
        // Base case
        int n= nums.size();
        if(index>=n)
            return 0;
        if(target<0)
            return 0;
        if(target==0)
            return 1;
        
        if(dp[index][target]!=-1){
            return dp[index][target];
        }

        

        bool include= solveMem(index+1,nums,target-nums[index],dp);
        bool exclude= solveMem(index+1,nums,target,dp);

        dp[index][target]= (include || exclude);
        return dp[index][target];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        // agar array odd values ka hua to 
        if(sum & 1)
            return false;
        int target= sum/2;
        int index=0;
        // bool ans=solve(index,nums,target);

        vector<vector<int>> dp(nums.size(), vector<int>(target+1,-1));
        bool ans=solveMem(index,nums,target,dp);



        return ans;
    }
};