class Solution {
public:
    void sortColors(vector<int>& nums) {
        int st=0;
        int end=nums.size()-1;
        int i=0;
        while(i<=end){
            if(nums[i]==2){
                swap(nums[i],nums[end]);
                end--;
            }
            else if(nums[i]==0){
                swap(nums[i],nums[st]);
                i++;
                st++;
            }
            else{
                i++;
                
            }
        }
    }
};