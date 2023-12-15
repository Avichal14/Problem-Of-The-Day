//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int arr[100001];
    int mod=1e9+7;
    int go(int n)
    {
        if(n==0)
        return 1;
        if(n<0)
        return 0;
        if(arr[n]!=-1)
        return arr[n];
        return  arr[n]=(go(n-1)+go(n-2))%mod;
    }
        int nthPoint(int n){
            memset(arr,-1,sizeof(arr));
           return go(n);
        }


};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends