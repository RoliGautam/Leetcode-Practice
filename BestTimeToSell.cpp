class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        //if array is null , simply return null....
        if(prices.size()==0) return 0;

        //initialize profit as 0
        int profit = 0;
        //traverse the whole array
        for (int i = 0; i < prices.size() - 1; i++) {
            //if second element is greater than first element...
            //add their(second - first) difference in profit..
            if (prices[i + 1] - prices[i] > 0) {
                profit += (prices[i+1] - prices[i]);
            }        
        }
        //return profit..
        return profit;
    }
};
