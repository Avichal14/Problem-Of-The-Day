//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern) {
        // code here
        vector<string> ans;
        for(auto i: Dictionary){
            string temp ="";
            for(auto j : i){
                if(isupper(j)){
                    if(temp.size() < Pattern.size()){
                        temp.push_back(j);
                    }
                }
            }
            if(temp == Pattern){
                ans.push_back(i);
            }
        }
        if(ans.size() != 0) {
            sort(ans.begin(),ans.end());
            return ans;
        }
        string a = "-1";
        ans.push_back(a);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends