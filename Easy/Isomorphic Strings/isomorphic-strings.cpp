//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        if(str1.size()!=str2.size())
            return 0;
        unordered_map<char, char> mp;
        unordered_map<char, char> mpch;
        int i = 0;
        while(str1[i]!='\0'){
            if(!mp[str1[i]]){
                mp[str1[i]] = str2[i];
            }
            else{
                if(mp[str1[i]] != str2[i])
                    return false;
            }
            
            if(!mpch[str2[i]]){
                mpch[str2[i]] = str1[i];
            }
            else{
                if(mpch[str2[i]] != str1[i])
                    return false;
            }
            i++;
        }
        return true;
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends