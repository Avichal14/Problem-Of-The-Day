//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        //Write your code here
         sort(range.begin(),range.end());
        stack<pair<int,int>> st;
        st.push({range[0][0],range[0][1]});

        for(int i=1;i<n;i++)
        {
            pair<int,int> p={range[i][0],range[i][1]};
            pair<int,int> t= st.top();
            if(t.second>=p.first)
            {
                st.pop();
                st.push({min(t.first,p.first),max(p.second,t.second)});
            }
            else
                st.push(p);
        }
        vector<pair<int,int>> all(st.size());
        for(int i=st.size()-1;i>=0;i--)
        {
            all[i]=st.top();
            st.pop();
        }
        
        vector<int> ans;
        for(int Q:queries)
        {
            bool find=false;
            for(pair<int,int> a:all)
            {
                int no=a.second-a.first+1;
                if(no<Q)
                {
                    Q-=no;
                }
                else
                {
                    find=true;
                    ans.push_back(a.first+Q-1);
                    break;
                }
            }
            if(find==false)
                ans.push_back(-1);
        }
        return ans;
    } 
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<vector<int>>range(n, vector<int>(2, 0));
	    for(int i = 0 ; i < n; i++){
	        cin >> range[i][0] >> range[i][1];
	    }
	    int q;
	    cin >> q;
	    vector<int>queries;
	    for(int i = 0 ; i < q; i++){
	        int x;
            cin >> x;
	        queries.push_back(x);
	    }
	    Solution ob;
	    vector<int>ans = ob.kthSmallestNum(n, range, q, queries);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout << endl;
	}
	return 0;
}

// } Driver Code Ends