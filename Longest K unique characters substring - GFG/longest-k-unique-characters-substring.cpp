//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int ans = 0 , res = 0 , j= 0;
    int count ;
    
    unordered_map <char,int> ump;
    for ( int i = 0 ; i<s.length();i++){
        ump[s[i]]++;
        count = ump.size();
         if ( count == k) {
            ans = i - j +1;
            res = max(ans,res);
        }
        
        if ( count > k){
            ump[s[j]]--;
            if(ump[s[j]] == 0 ) ump.erase(s[j]);
            j++;
        }
    }
      return ((res ==0 )? -1 :res);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends