class Solution {
public:

void profit(vector<int>&prices,int i,int&minPrices,int&maxProfit){
    //Base case
    if(i==prices.size()){
        return;
    }
    //1 case solve krdo
    if(prices[i]<minPrices) minPrices=prices[i];
    int todaysprofit=prices[i]-minPrices;
    if(todaysprofit>maxProfit) maxProfit=todaysprofit;
    // baki recursion smbhal lega
    profit(prices,i+1,minPrices,maxProfit);
}
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxProfit=INT_MIN;
        profit(prices,0,minPrice,maxProfit);
        return maxProfit;
    }
};