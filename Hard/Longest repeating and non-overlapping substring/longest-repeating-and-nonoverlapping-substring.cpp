//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long mod = (1LL << 45) - 1;
    string possible(int p, string& txt){
        int t = txt.size();
        unordered_map<long long, int> mp;
        long long pr = 1;
        long long pp = 31;
        long long th = 0;
        for(int i=p-1; i>=0; i--){
            th = (th % mod + ((txt[i] - 'a' + 1) % mod * pr % mod) % mod) % mod;
            if(i > 0) pr = (pr * pp) % mod;
        }
        mp[th] = 0;
        int j = 0;
        for(int i=p; i<t; i++){
            th = (th % mod - ((txt[j++] - 'a' + 1) * pr) % mod + mod) % mod;
            th = ((th % mod * pp % mod) + (txt[i] - 'a' + 1)) % mod;
            mp[th] = j;
        }
        pr = 1, pp = 31, th = 0;
        for(int i=p-1; i>=0; i--){
            th = (th % mod + ((txt[i] - 'a' + 1) % mod * pr % mod) % mod) % mod;
            if(i > 0) pr = (pr * pp) % mod;
        }
        if(mp[th] >= p) return txt.substr(0, p);
        j = 0;
        for(int i=p; i<t; i++){
            th = (th % mod - ((txt[j++] - 'a' + 1) * pr) % mod + mod) % mod;
            th = ((th % mod * pp % mod) + (txt[i] - 'a' + 1)) % mod;
            if(mp[th] >= (j+p)) return txt.substr(j, p);
        }
        return "";
    }
    string longestSubstring(string s, int n) {
        long long p = 31;
        long long pw = 1;
        int l = 1, h = s.size();
        string ans = "";
        while(l <= h){
            int mid = l + (h - l) / 2;
            string c = possible(mid, s);
            if(c.size() == 0) h = mid - 1;
            else{
                if(c.size() > ans.size()) ans = c;
                l = mid + 1;
            }
        }
        if(ans.empty()) return "-1";
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        string S;

        cin >> N;
        cin >> S;

        Solution ob;
        cout << ob.longestSubstring(S, N) << endl;
    }
    return 0;
}
// } Driver Code Ends