//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int n, int k) {
        // code here
        int i =1;
        int j = n;
        int t =0;
        while(j-i>=k)
        {
            if(t%2==0)
            {
                i=i+k;
            }
            else
            {
                j=j-k;
            }
            t++;
            
        }
        if(t%2==0)
        {
            return j;
        }
        else
        {
            return i;
        }
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends