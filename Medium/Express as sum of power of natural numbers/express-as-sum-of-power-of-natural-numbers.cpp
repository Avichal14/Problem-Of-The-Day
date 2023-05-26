//{ Driver Code Starts
// Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
     long long mod=1e9+7;
    
    int numOfWays(int n, int x)
    {   long long mod= 1e9+7;
        int root= int(pow(n,1.0/x));
        vector<int>dp(n+1,0);
        dp[0]=1;
        for(int i=1;i<=root;i++){
            for(int j=n;j>=int(pow(i,x));j--){
                dp[j]=(dp[j]+dp[j-int(pow(i,x))])%mod;
            }
        }
        return dp[n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}

// } Driver Code Ends