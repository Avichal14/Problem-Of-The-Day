class Solution {
public:

    void maxProfitFinder(vector<int>& prices,int i,int& minP,int &maxP){
        //base case
        if(i==prices.size()) return ;


        // 1 case
        if(prices[i]<minP) minP=prices[i];
        int todayPro=prices[i]-minP;
        if(todayPro > maxP) maxP=todayPro;
        
        // recursion
        maxProfitFinder(prices,i+1,minP,maxP);
    }



    int maxProfit(vector<int>& prices) {
        int minP=INT_MAX;
        int maxProfit=INT_MIN;
        maxProfitFinder(prices,0,minP,maxProfit);
        return maxProfit;
    }
};