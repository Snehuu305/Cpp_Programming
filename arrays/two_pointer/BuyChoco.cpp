class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());   // step 1: sort so cheapest 2 are at index 0 and 1
        int cost = prices[0] + prices[1];     // step 2: cost of cheapest pair
        
        if (cost <= money) {                  // step 3: check affordability
            return money - cost;
        } else {
            return money;
        }
    }
};