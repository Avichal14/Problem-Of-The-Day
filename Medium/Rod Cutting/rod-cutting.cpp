//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  
    vector<vector<int>>dp;
  
    int solve(int i, int price[], int n, int nn)
    {
        int pick = INT_MIN, not_pick = 0;
        
        if(nn == 0) return 0;
        
        if(dp[i][nn] != -1) return dp[i][nn];
        
        if(i == n-1)
        {
            if(nn%(i+1) == 0) return (nn/(i+1))*price[i];
            else return INT_MIN;
        }
        
        if(nn >= i+1) pick = price[i] + solve(i, price, n, nn-(i+1));
        not_pick = solve(i+1, price, n, nn);
        
        return dp[i][nn] = max(pick, not_pick);
    }
  
    int cutRod(int price[], int n) 
    {
        dp.resize(n+1, vector<int>(n+1, -1));
        return solve(0, price, n, n);    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends