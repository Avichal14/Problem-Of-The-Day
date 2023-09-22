//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int firstoc(int arr[],int n,int x){
        int s=0;
        int e=n-1;
        int ans=n;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]>=x){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
    int lastoc(int arr[],int n,int x){
        int s=0;
        int e=n-1;
        int ans=n;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]>x){
                ans=mid;
                e=mid-1;
               
            }
            else{
                 s=mid+1;
            }
        }
        return ans;
    }
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        int a=firstoc(arr,n,x);
        // int b=lastoc(arr,n,x);
        // return {a,b};
        
        if(a==n || arr[a]!=x) return {-1,-1};
        return {a,lastoc(arr,n,x)-1};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends