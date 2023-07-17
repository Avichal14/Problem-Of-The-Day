//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		     string ans;
		   char temp;
		   queue<int>q;
		   map<char,int>mp;
		   int n=A.size();
		   temp=A[0];
		   ans.push_back(temp);
		   mp[A[0]]++;
		   q.push(A[0]);
		   for(int i=1;i<n;i++){
		      mp[A[i]]++; 
		      q.push(A[i]);
		      if(A[i]==temp or temp=='#'){
		          while(!q.empty()){
		             
		              if(mp[q.front()]==1){
		                  temp=q.front();
		                  q.pop();
		                  break;
		              }
		              else if(mp[q.front()]>1){
		                  q.pop();
		              }
		              temp='#';
		          }
		      }    
		      ans.push_back(temp);
		   }
	      return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends