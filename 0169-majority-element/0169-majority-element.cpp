class Solution {
public:
    int majorityElement(vector<int>& v) {
        int count=0;
        int el;
        for(int i=0;i<v.size();i++){
        if(count==0){
            count=1;
            el=v[i];

        }
        else if(v[i]==el){
            count++;
        }
        else{
            count--;
        }


    }
    int c1=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==el)c1++;

    }
    if(c1>(v.size()/2)){
        return el;
    }
    return -1;

    }
};