class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minPrice = prices.at(0);
       int maxProfit = 0;
       for (int price : prices) {
           minPrice = min(price, minPrice);
           int potentialProfit = price - minPrice;
           maxProfit = max(potentialProfit, maxProfit);
       }
       return maxProfit; 
    }
};
