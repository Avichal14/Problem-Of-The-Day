class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int> window;
        vector<int> ans;
        int j=0;
        for(int j=0;j<k;j++)
            window.insert(nums[j]);
        
        ans.push_back(*window.rbegin());
        int i=0;
        for(j=k;j<nums.size();j++){
            window.insert(nums[j]);
            window.erase(window.find(nums[i]));
            i++;
            ans.push_back(*window.rbegin());
        }
        return ans;

    }
};