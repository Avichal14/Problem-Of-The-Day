class Solution {
public: 
    bool alpha(char ch){
        if((ch>=97 && ch<=122) || (ch>=65 && ch<=90)){
            return true;
        }
        else{
            return false;
        }
    }
    string reverseOnlyLetters(string s) {
        int l=0,h=s.size()-1;
        while(l<h){
            if(alpha(s[l]) && alpha(s[h])){
                swap(s[l],s[h]);
                l++;
                h--;
            }
            else if(!alpha(s[l])){
                l++;
            }
            else{
                h--;
            }
        }
        return s;
    }
};