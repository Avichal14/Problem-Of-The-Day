class Solution {
public:
    void getallSub(vector<int>& nums,vector<int>& ans,int i,vector<vector<int>> &allSubsets){
        if(i==nums.size()){
            //store value
            allSubsets.push_back({ans});
            return;
        }
        //include
        ans.push_back(nums[i]);
        getallSub(nums,ans,i+1,allSubsets);

        ans.pop_back();

        //exclude
        getallSub(nums,ans,i+1,allSubsets);
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> ans;

        getallSub(nums,ans,0,allSubsets);
        return allSubsets;
    }
};