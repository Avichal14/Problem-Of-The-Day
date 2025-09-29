class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int l=0,r=nums.size()-1;
        vector<pair<int, int>> sortedNums(nums.size());
        for(int i = 0; i < nums.size(); i++) {
            sortedNums[i] = {nums[i], i}; 
        }
        sort(sortedNums.begin(),sortedNums.end());
        while (l < r) {
            int temp = sortedNums[l].first + sortedNums[r].first;
            if (temp == target) {
                return {sortedNums[l].second, sortedNums[r].second};
            } else if (temp < target) {
                l++;
            } else {
                r--;
            }
        }
        return {-1,-1};    
    }
};