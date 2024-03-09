//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
          vector<char> v;
        while(r--){
            for(int i=0;i<s.length();i++){
                if(s[i]=='0'){
                    v.push_back('0');
                    v.push_back('1');
                }
                else if(s[i]=='1'){
                    v.push_back('1');
                    v.push_back('0');
                }
                if(v.size()>n){
                    break;
                }
            }
            s=string(v.begin(),v.end());
            v.clear();
        }
        return s[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends