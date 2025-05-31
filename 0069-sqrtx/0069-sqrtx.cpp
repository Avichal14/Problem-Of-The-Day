class Solution {
public:
   int mySqrt(int x) {
       int target=x;
       int s=0;
       int e=x;
       int ans=0;
       while(s<=e){
        long long mid=s+(e-s)/2;
        if( mid*mid == target ){
            return mid;
        }
        if(mid*mid >target){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
       } 
       return ans;
    }
};