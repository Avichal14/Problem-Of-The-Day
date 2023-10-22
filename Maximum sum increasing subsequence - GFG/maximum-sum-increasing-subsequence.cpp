//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    map<int, int> mp; // {last_element, sum}
        int ans = arr[0];
        for(int i = 0; i < n; i++) {
            auto it = mp.lower_bound(arr[i]);
            if(it != mp.begin()) --it;
            int sum = arr[i];
            if(it != mp.end() && it -> first < arr[i]) sum += it -> second;
            if(mp.find(arr[i]) == mp.end() || mp[arr[i]] < sum) {
                mp[arr[i]] = sum;
            }
            it = mp.find(arr[i]);
            ++it;
            while(it != mp.end() && it -> second <= sum) {
                auto it2 = it;
                ++it2;
                mp.erase(it);
                it = it2;
            }
            ans = max(ans, sum);
        }
        return ans;
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
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends