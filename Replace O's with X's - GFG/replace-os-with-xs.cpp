//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
   void dfs(vector<vector<char>> &a,int i,int j)
    {
        if(i<0 || j<0 || i>a.size()-1 || j>a[0].size()-1 || a[i][j]!='O') return;
        if(a[i][j]=='O') a[i][j]='*';
        dfs(a,i+1,j);
        dfs(a,i-1,j);
        dfs(a,i,j+1);
        dfs(a,i,j-1);
    }

    vector<vector<char>> fill(int n, int m, vector<vector<char>> a)
    {
        for(int i=0;i<n;i++) 
        {
            if(a[i][0]=='O') dfs(a,i,0);
            if(a[i][m-1]=='O') dfs(a,i,m-1);
        }        
        for(int i=0;i<m;i++) 
        {
            if(a[0][i]=='O') dfs(a,0,i);
            if(a[n-1][i]=='O') dfs(a,n-1,i);
        }
        for(int i=0;i<n;i++) for(int j=0;j<m;j++)
        {
            if(a[i][j]=='O') a[i][j]='X';
            if(a[i][j]=='*') a[i][j]='O';
        }
        return a;
    }

};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends