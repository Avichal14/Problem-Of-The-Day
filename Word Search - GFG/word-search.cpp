//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:

    bool dfs(vector<vector<char>>& board,string word,int i,int j,string curr_word,vector<pair<int,int> > directions,int rows,int cols,int pos)
    {
        if(word==curr_word)
        {
            return true;
        }
            
        
        if(i>=0 && i<rows && j>=0 && j<cols && board[i][j]!='0' && board[i][j]==word[pos])
        {
            curr_word+=board[i][j];
            pos++;
            
            int count = 0;
            
            for(auto it : directions)
            {
                int next_row  = i + it.first;
                int next_col  = j + it.second;
                
                char temp = board[i][j]; 
                board[i][j] = '0';
                if(dfs(board,word,next_row,next_col,curr_word,directions,rows,cols,pos))
                {
                    count++;
                }
                
                board[i][j] = temp;
            }
            
            if(count>0)
            {
                return true;
            }
        }
        return false;
        
    }
    
    
    bool isWordExist(vector<vector<char>>& board, string word)
    {
        vector<pair<int,int> > directions = {{-1,0},{1,0},{0,1},{0,-1}};
        
        for(int i = 0;i<board.size();i++)
        {
            for(int j = 0;j<board[0].size();j++)
            {
                if(board[i][j]==word[0])
                {
                    string curr_word = "";
                    int pos = 0;
                    
                    if(dfs(board,word,i,j,curr_word,directions,board.size(),board[0].size(),pos))
                    {
                        return true;
                    }
                }
            }
            
        }
        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends