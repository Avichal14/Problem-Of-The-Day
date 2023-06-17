class Solution {
public:
bool pal(string &s,int st,int end){
    if(st>=end){
        return true;
    }
    if(s[st]!=s[end]){
        return false;
    }
    return pal(s,st+1,end-1);
}
    bool isPalindrome(int x) {
        string s=to_string(x);
        return pal(s,0,s.size()-1);
    }
};