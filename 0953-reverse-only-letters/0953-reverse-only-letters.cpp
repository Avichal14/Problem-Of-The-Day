class Solution {
public:
    string reverseOnlyLetters(string s) {
        int low=0;
        int high=s.size()-1;
        while(low<=high){
            if(isalpha(s[low]) && isalpha(s[high])){
                swap(s[low],s[high]);
                low++;
                high--;
            }
            else if(!isalpha(s[low])){
                low++;
            }
            else{
                high--;
            }
        }
        return s;
    }
};