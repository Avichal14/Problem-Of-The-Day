class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int n=row*col;

        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            int rowind=mid/col;
            int colind=mid%col;
            int currnum=matrix[rowind][colind];
            if(currnum==target){
                return true;
            }
            else if(target>currnum){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return false;
    }
};