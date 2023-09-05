class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sumofgivenarray=0;
        int sumofdesiredarray=0;
        
        
        for(int i=0;i<nums.size();i++){
            sumofgivenarray = sumofgivenarray+nums[i];
        }
        for(int i=0;i<=nums.size();i++){
            sumofdesiredarray+=i;
        }
        int op=sumofdesiredarray-sumofgivenarray;
        return op;
    }
};