//{ Driver Code Starts
// Initial function template for C++

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
    int countFreq(vector<int>& nums, int target) {
        // code here
        int n=nums.size();
        int first=firstOcc(nums, n, target);
        int last=lastOcc(nums, n, target);
        if(first==-1 && last==-1) return 0;
        else return (last-first)+1;
        
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.countFreq(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends