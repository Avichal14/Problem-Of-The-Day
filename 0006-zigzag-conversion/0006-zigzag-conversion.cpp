class Solution {
public:
    string convert(string s, int r) {
        if(r == 1) return s; // Avoid special case of r == 1 creating infinite loops.

        vector<vector<char>> v(r, vector<char>(s.length(), '*'));
        
        int idx = 0, i = 0, j = 0, n = s.length();
        bool down = true; // Start by going downwards.
        while(idx < n){
            if(down && i < r){
                v[i++][j] = s[idx++]; 
                if(i == r){ // If we've reached the bottom, switch direction
                    down = false; 
                    i -= 2; // Step one row up to the last row of the "diagonal"
                    j++; // And one step to the right
                }
            } else if(!down && i >= 0){
                v[i--][j++] = s[idx++];
                if(i == -1){ // If we've reached the top, switch direction
                    down = true;
                    i += 2; // Step one row down to the first row
                    j--; // And one step to the left
                }
            }
        }
        
        string ans = "";
        for(int i = 0;i < r;i++)
            for(int j = 0;j < n;j++)
                if(v[i][j] != '*')
                    ans += v[i][j];
        return ans;
    }
};