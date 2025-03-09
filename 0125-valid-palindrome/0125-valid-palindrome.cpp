class Solution {
public:
     bool isPalindrome(string s) {
        string filter;
        for(char c:s){
            if(isalnum(c)){
                filter+=tolower(c);
            }
        }
        int n=filter.length();
        for (int i = 0; i < n / 2; i++) {
            if (filter[i] != filter[n - i - 1]) {
                return false;
            }
        }
        return true;
     }
};