class Solution {
public:
    int firstOcc(vector<int>& nums, int n,int k){
        int start=0;
        int end=n-1;
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;

            if(nums[mid]==k){
                ans=mid;
                end=mid-1;
            }
            if(nums[mid]> k){
                end=mid-1;
            }
            if(nums[mid]<k){
                start=mid+1;
            }
            
        }
        return ans;
    };

    int lastOcc(vector<int>& nums, int n,int k){
        int start=0;
        int end=n-1;
        int ans=-1;
        while(start<=end){
            int mid=start+(end-start)/2;

            if(nums[mid]==k){
                ans=mid;
                start=mid+1;;
            }
            if(nums[mid]> k){
                end=mid-1;
            }
            if(nums[mid]<k){
                start=mid+1;
            }
            
        }
        return ans;
    };
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int first=firstOcc(nums, n, target);
        int last=lastOcc(nums, n, target);
        return {first,last};
    }
};