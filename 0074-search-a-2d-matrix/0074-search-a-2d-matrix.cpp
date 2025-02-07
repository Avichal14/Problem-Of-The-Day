class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int s=0;
        int m=matrix.size();
        int n=matrix[0].size();
        int totalsize=m*n;
        int e=totalsize-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            int rowInd=mid/n;
            int colInd=mid%n;
            int element=matrix[rowInd][colInd];
            if(element==target){
                return true;
            }
            else if(element < target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return false;
    }
};