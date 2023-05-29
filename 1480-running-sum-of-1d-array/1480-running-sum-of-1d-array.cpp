class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> arr;
        
        for(int i=0;i<nums.size();i++){
            int size=0;
            for(int j=0;j<=i;j++){
                size=size+nums[j];
            }
            arr.push_back(size);
        }
        return arr;
    }
};