//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	
	public:
	void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	      int i=1,j=n/2,maxi;
        for(int k=0;k<n;k++){
            maxi=max(maxi,arr[k]);
        }
        maxi++;
        for(int k=1;k<n-1;k++){
            if(k%2!=0){
                arr[k]=(arr[j]%maxi)*maxi+arr[k];
                j++;
            }
            else{
                arr[k]=(arr[i]%maxi)*maxi+arr[k];
                i++;
            }
        }
        for(int k=1;k<n-1;k++){
            arr[k]/=maxi;
        }
	}
		 

};

//{ Driver Code Starts.


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends