//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void Reverse(stack<int> &st){
        // BC
        if(st.empty()){
            return;
        }
        int target=st.top();
        st.pop();
        Reverse(st);
        insertAtBottom(st,target);
    }
    void insertAtBottom(stack<int>&st,int target){
        if(st.empty()){
            st.push(target);
            return;
        }
        int topel=st.top();
        st.pop();
        insertAtBottom(st,target);
        st.push(topel);
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends