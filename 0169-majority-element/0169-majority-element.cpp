class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size();
        int ans=0;
        for(auto it: nums){
            m[it]++;
        }
        for(auto it:m){
            if(it.second>n/2){

                ans= it.first;
            }
        }
        return ans;
    }
};