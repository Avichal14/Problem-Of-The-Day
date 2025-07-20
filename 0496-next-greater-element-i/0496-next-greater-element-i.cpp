class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
         map<int,int>mp;
        int greatest = INT_MIN;
        int n = nums2.size();
        for(int i = n-1 ; i>=0 ; i--){
          if(nums2[i]>=greatest){
            greatest = nums2[i];
            mp[nums2[i]] = -1;
          }
         else{
           int it = i+1;
           while(it<n && nums2[it]<nums2[i]){
             it = it + 1;
           }
           if(it<n){
             mp[nums2[i]] = nums2[it];
           }
           else{
             mp[nums2[i]] = -1;
           }
         }
      }
      int m = nums1.size();
      vector<int>ans(m);
      for(int i = 0 ; i<m ; i++){
        if(mp.find(nums1[i])!=mp.end()){
          ans[i] = mp[nums1[i]];
        }
        
      }
      return ans;
    }
};