//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
          map<int,int>b;
        b[5]=0;
        b[10]=0;
        for(auto i:bills)
        {
            if(i==5)
            {
                b[5]++;
            }
            else if(i==10)
            {
                if(b[5]>0)
                {
                    b[5]--;
                    b[10]++;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if(b[10]>=1 and b[5]>=1)
                {
                    b[10]--;
                    b[5]--;
                }
                else if(b[5]>=3)
                {
                    b[5]=b[5]-3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends