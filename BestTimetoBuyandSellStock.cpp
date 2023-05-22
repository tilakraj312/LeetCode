//Best Time to Buy and Sell Stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int MaxProfit = 0;
        for (int i =0; i< prices.size(); i++){
          if(prices[i] < minPrice){
              minPrice = prices[i]; 
          }
          else if (prices[i]-minPrice > MaxProfit){
              MaxProfit = prices[i] - minPrice;
          }  
    
    }
    return{MaxProfit};}