//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		void rec(int i, string &s, vector<string> &ans, string curr) {
	    if(i == s.size()) {
	        ans.push_back(curr);
	        return;
	    }
	    rec(i+1, s, ans, curr);
	    rec(i+1, s, ans, curr+s[i]);
	}
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string> ans;
		    rec(0,s,ans,"");
		    sort(ans.begin(), ans.end());
		     ans.erase(ans.begin());
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends