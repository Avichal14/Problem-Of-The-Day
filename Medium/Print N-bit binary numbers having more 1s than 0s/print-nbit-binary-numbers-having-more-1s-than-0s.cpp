//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	string decToBin(int num){
        string str="";
        while(num){
            if(num&1){
                str+="1";
            }
            else str+="0";
            num/=2;
        }
        return str;
    }
vector<string> NBitBinary(int n)
{
   // Your code goes here
   vector<string>ans;
   for(int i=pow(2,n)-1;i>=n;i--){
       string s=decToBin(i);
       reverse(s.begin(),s.end());
       int c1=0,c0=0;bool flag=true;
       for(int j=0;j<s.length();j++){
           if(s[j]=='1')c1++;
           else c0++;
           if(c0>c1)flag=false;
       }
            if(flag==true &s.length()==n)ans.push_back(s);
   }
   return ans;
	    // Your code goes here
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends