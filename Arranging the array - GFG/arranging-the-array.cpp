//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            // Your code goes here
              vector<int> arrn,arrp;
            for(int i=0;i<n;i++){
            if(arr[i]<0){
                arrn.push_back(arr[i]);
            }else{
                arrp.push_back(arr[i]);
            }
        }
        int i=0,j=0;
        while(i<n && j<arrn.size()){
            arr[i]=arrn[j];
            i++, j++;
        }
         j=0;
        while(i<n && j<arrp.size()){
            arr[i]=arrp[j];
            i++,j++;
        }
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends