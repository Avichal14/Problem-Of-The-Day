class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=1; i<n && count<=1; i++){
            if (nums[i]<nums[i-1]) count++;
        }
        return (nums[0]>=nums.back() && count==1) || count==0;
    }
};