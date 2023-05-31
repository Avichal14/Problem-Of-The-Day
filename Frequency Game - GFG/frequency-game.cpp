//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
        // code here
          unordered_map<int , int > countNum ;
        int largestElement = -1 ;
        int minCountOfelement = n+1 ;
        
        for(int i=0 ; i<n ; i++){
            countNum[arr[i]]++ ;
        }
        
        for(auto it=countNum.begin() ; it!=countNum.end() ; it++){
            if( it->second < minCountOfelement){
                largestElement = it->first ;
                minCountOfelement = it->second ;
            }else if(it -> second == minCountOfelement && it->first > largestElement){
                largestElement = it->first ;
            }
        }
        
        return largestElement ;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends