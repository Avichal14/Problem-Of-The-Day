//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long divide(long long dividend, long long divisor) 
    {
        //code here
          long long s=0;
        long long e=abs(dividend);
        long long ans=0;
        while(s<=e){
            long long mid=s+(e-s)/2;
            if(abs(mid*divisor) == abs(dividend)){
                ans=mid;
                break;
            }
            else if(abs(mid*divisor) > abs(dividend)){
                // left
                e=mid-1;
            }
            else{
                ans=mid;
                s=mid+1;
            }
        }
       if((divisor<0 && dividend<0) || (divisor > 0 && dividend > 0)){
        return ans;
       }
       else{
        return -ans;
       }
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin >> t;

	while (t--)
	{

		long long a, b;
		cin >> a >> b;
		
		Solution ob;
		cout << ob.divide(a, b) << "\n";
	
cout << "~" << "\n";
}

	return 0;
}

// } Driver Code Ends