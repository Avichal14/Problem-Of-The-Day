class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[0];
        int n=nums.size();
        int b=nums[n-1];
        while(a > 0 && b>0){
            if(a >b){
                a=a-b;
            }
            else{
                b=b-a;
            }
        }
        return a==0? b: a;
        
    }
};