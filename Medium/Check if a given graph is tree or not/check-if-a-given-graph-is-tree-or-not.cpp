//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Matrix
{
public:
    template <class T>
    static void input(vector<vector<T>> &A,int n,int m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d ",&A[i][j]);
            }
        }
    }
 
    template <class T>
    static void print(vector<vector<T>> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A[i].size(); j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends
class Solution {
  public:
    bool iscyclicdfs(int node,int parent,vector<int> graph[],
    vector<int>&visited){
        visited[node]=1;
        for(auto it:graph[node]){
            if(visited[it]==false){
                bool ans=iscyclicdfs(it,node,graph,visited);
                if(ans==true){
                    return true;
                }
            }
            else if(it!=parent){
                return true;
            }
        }
        return false;
        
    }
    int isTree(int n, int m, vector<vector<int>> &adj) {
        vector<int> graph[n];
        for(auto it:adj ){
            graph[it[0]].push_back(it[1]);
             graph[it[1]].push_back(it[0]);
            
        }
        vector<int> visited(n,0);
        int provinces=0;
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                provinces++;
                
                bool ans=iscyclicdfs(i,-1,graph,visited);
                if(ans==true){
                    return false;
                }
            }
        }
//here we are checking 2nd condition i.e connectivity
        if(provinces>1){
            return false;
        }
        return true;
       
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n; 
        scanf("%d",&n);
        
        
        int m; 
        scanf("%d",&m);
        
        
        vector<vector<int>> edges(m, vector<int>(2));
        Matrix::input(edges,m,2);
        
        Solution obj;
        int res = obj.isTree(n, m, edges);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends