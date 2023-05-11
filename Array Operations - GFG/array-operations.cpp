//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &a) {
        // code here
          int p=0;
       int q=0;
       for(int i=0;i<n;i++){
           if(a[i]==0)p++;
           else q++;
       }
       int ans=0;
       for(int i=0;i<n-1;i++){
           if(a[i]!=0 && a[i+1]==0)ans++;
       }
       if(p==n)return 0;
       if(q==n)return 1;
       if(a[n-1]==0)
       return ans;
       if(a[n-1]!=0)return ans+1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends