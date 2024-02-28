//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
         int n= s.size();
        int hunds= s[n-3]+'0';
        int tens= s[n-2]+'0';
        int ones= s[n-1]+'0';
        int num= hunds*100+tens*10+ones;
        return num%8==0?1:-1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends