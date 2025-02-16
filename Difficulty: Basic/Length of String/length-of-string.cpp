//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int lengthString(string &s) {
        // Your code here
        int len=0;
        int i=0;
        while(s[i]!='\0'){
            len++;
            i++;
        }
        return len;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {

        string s;
        cin >> s;
        Solution obj;
        cout << obj.lengthString(s) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends