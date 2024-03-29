//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
          if (start == end) return 0;

        queue<pair<int, int>> q;
        bool visited[100000] = {false};
    
        q.push({start, 0});
        visited[start] = true;
        
        // int step = 0; // if not take pair
    
        while (!q.empty()) {
            
            //int size = q.size();
            //for(int i = 0; i < size; i++) {
            //above loop use when we don't use pair and use int step
            
            //pair<int, int> current = q.front();
            auto current = q.front();
            q.pop();
    
            for (int num : arr) {
                int next = current.first * num;
    
                if (next >= 100000) { // Take mod only when necessary
                    next %= 100000;
                }
    
                if (next == end) return current.second + 1;
    
                if (!visited[next]) {
                    visited[next] = true;
                    q.push({next, current.second + 1});
                }
            }
            
            // } after loop increment step++;
        }
    
        return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends