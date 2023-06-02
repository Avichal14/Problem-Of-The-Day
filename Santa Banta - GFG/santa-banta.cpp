//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
public:
     const int size_primes = 1e6+1;
    vector<int> primes, parent, count;
    void precompute(){
        bool arr[size_primes];
        memset(arr, true, size_primes);
        arr[0] = false, arr[1] = false;
        for(int i = 2; i < size_primes ; i++){
            if(arr[i]){
                int j = 2;
                while((i*j)< size_primes )
                    arr[i*j] = false, j++;
            }
        }
        for(int i = 0 ; i < size_primes; i++)
            if(arr[i]){
                primes.push_back(i);
            }
    }
    int find(int x){
        return parent[x] == x ? x : find(parent[x]);
    }
    void union_(int a, int b){
        int parA = find(a) , parB = find(b);
        if(parA != parB){
            parent[parB] = parA;
            count[parA] += count[parB];
        }
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        if(m == 0)
            return -1;
        parent.resize(n + 1), count.resize(n+1);
        fill(count.begin(), count.end(), 1);
        iota(parent.begin(), parent.end(), 0);
        for(int i = 0 ; i < (n+1); i++){
            vector<int> adj = g[i];
            for(auto ele : adj)
                union_(i, ele);
        }
        int ans = 0;
        for(auto ele : count){
            ans = max(ans, primes[ele -1]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
	int t;cin>>t;
	Solution ob;
	ob.precompute();
	while(t--){
        int n,e,u,v;
        cin>>n>>e;
        vector<vector<int>> g(n+10);
        
		for(int i = 0; i < e; i++)
		{
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		cout << ob.helpSanta(n, e, g) << endl;
		
	}
}



// } Driver Code Ends