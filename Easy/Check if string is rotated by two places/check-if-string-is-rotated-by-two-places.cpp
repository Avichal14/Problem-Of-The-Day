//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
         if(str1.length()!=str2.length()){
           return false;
       }
     string rot_clock=str1.substr(2)+str1.substr(0,2);
     string rot_anti=str1.substr(str1.length()-2)+str1.substr(0,str1.length()-2);
     if(rot_clock==str2){
         return true;
     }
     if(rot_anti==str2){
         return true;
     }
     return false;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends