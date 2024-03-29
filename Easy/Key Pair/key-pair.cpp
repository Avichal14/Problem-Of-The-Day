//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	   // for(int i=0;i<n;i++){
	   //     for(int j=i+1;j<n;j++){
	   //         if(arr[i]+arr[j]==x){
	   //             return true;
	   //         }
	   //     }
	   // }
	   // return false;
	   
	   
	   // two pointer approach
	   sort(arr,arr+n);
	   int low=0;
	   int high=n-1;
	   while(low<high){
	       int sum=arr[low]+arr[high];
	       if(sum==x){
	           return true;
	       }
	       else if(sum>x){
	           high--;
	       }
	       else if(sum<x){
	           low++;
	       }
	   }
	   return false;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.hasArrayTwoCandidates(arr, n, x);
        cout << (ans ? "Yes\n" : "No\n");
    }
    return 0;
}

// } Driver Code Ends