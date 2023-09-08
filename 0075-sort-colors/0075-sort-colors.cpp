class Solution {
public:
    void sortColors(vector<int>& arr) {
       int n=arr.size();
        int zeroc=0,onec=0,twoc=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                zeroc++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                onec++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]==2){
                twoc++;
            }
        }
        int index=0;
        while(zeroc--){
            arr[index]=0;
            index++;
        }
        while(onec--){
            arr[index]=1;
            index++;
        }
        while(twoc--){
            arr[index]=2;
            index++;
        }
        
    }
};