class Solution {
public:
void getallSub(vector<int>& nums,vector<int>& ans,int i,vector<vector<int>> &allSubsets){
    
        if(i==nums.size()){
            //store value
            allSubsets.push_back(ans);
            return;
        }
        //include
        ans.push_back(nums[i]);
        getallSub(nums,ans,i+1,allSubsets);

        ans.pop_back();

        int index=i+1;
        while(index < nums.size()  && nums[index]==nums[index-1]) index++;
        //exclude
        getallSub(nums,ans,index,allSubsets);
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> allSubsets;
        vector<int> ans;

        getallSub(nums,ans,0,allSubsets);
        return allSubsets;
    }
};