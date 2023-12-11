//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long sum = 0;
        long m = INT_MIN;
        for (int i = 0; i < K; i++){
            sum += Arr[i];
        }
        int b=0;
        m = sum;
        for (int i = K; i < N; i++){
            sum -= Arr[b++];
            sum += Arr[i];
            if (m < sum){
                m = sum;
            }
        }
        return m;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends