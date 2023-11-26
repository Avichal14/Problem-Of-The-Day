//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
     void solve2(vector<int>& ans,int n,int N){
       if(n<=0){
           return;
       }
       solve2(ans,n-5,N);
       ans.push_back(n);
    }
    void solve(vector<int>& ans,int n,int N){
        if(n<=0){
            ans.push_back(n);
            return;
        }
        ans.push_back(n);
        solve(ans,n-5,N);
    }
    vector<int> pattern(int N){
        vector<int>ans;
        int n=N;
        solve(ans,n,N);
        solve2(ans,n,N);

        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends