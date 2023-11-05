class Solution {
public:
    int recsol(int n){
        if(n==1 || n==0){
            return n;
        }
        int ans=recsol(n-1)+ recsol(n-2);
        return ans;
    }
    int fib(int n) {
        int ans=recsol(n);
        return ans;
    }
};