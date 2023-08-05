class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int amount=100;
         int reduce = (purchaseAmount + 5) / 10 * 10;
 
    int result = amount - reduce;

    return result;
        
    }
};