//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
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
    vector<int> find(vector<int>& nums, int target) {
        // code here
        int n=nums.size();
        int first=firstOcc(nums, n, target);
        int last=lastOcc(nums, n, target);
        return {first,last};
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends