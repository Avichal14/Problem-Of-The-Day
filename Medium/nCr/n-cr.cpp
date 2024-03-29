//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    const int N=1e9+7;
    int nCr(int n, int r){
        if(r>n){
            return 0;
        }
        vector<int>temp;
        temp.push_back(1);
        for(int i=1;i<=n;i++)
        {
            temp.push_back(1);
            for(int j=i-1;j>0;j--)
            {
                    temp[j]=(temp[j]+temp[j-1])%N;
            }
        }
    return temp[r];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, r;
        cin>>n>>r;
        
        Solution ob;
        cout<<ob.nCr(n, r)<<endl;
    }
    return 0;
}
// } Driver Code Ends