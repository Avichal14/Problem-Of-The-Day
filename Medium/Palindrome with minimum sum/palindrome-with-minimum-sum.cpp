//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        // code here
           int i = 0, j = s.size() - 1;
        while(i <= j){
            if(s[i] >= 'a' && s[i] <= 'z' && s[j] == '?')
                s[j] = s[i];
            else if(s[i] == '?' && s[j] >= 'a' && s[j] <= 'z')
                s[i] = s[j];
            else if(s[i] != s[j])
                return -1;
            
            i++, j--;
        }
        
        int n = s.size();
        int sum = 0;
        char prev = 'A';
        for(int i = 0; i < n/2; i++){
            if(s[i] != '?'){
                if(prev != 'A')
                    sum += abs(prev - s[i]);
                prev = s[i]; 
            }
        }
        return sum*2;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends