//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
            int max=1;
        vector <int> ans;
        ans.push_back(max);
        int cnt=1;
        while(cnt<=S.size()){
            if(S[cnt-1]=='I'){
               ans.push_back(max+1); 
               max++;
            }
            else{
                int k=cnt;
                ans.push_back(ans[cnt-1]);
                while(S[k-1]=='D'){
                ans[k-1]+=1;
                    k--;
                }
                max++;
            
            }
            cnt++;
        }
        string a="";
        for(int i=0;i<ans.size();i++){
            a.push_back('0'+ans[i]);
        }
        return a;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends