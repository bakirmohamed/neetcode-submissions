class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int max_profit = 0;
        
        for(int i = 0; i<prices.size()-1;i++)
        {   
            int diff = 0; 
            int current_price = prices[i];
            for(int j = i+1;j<prices.size();j++)
            {  
                diff =  prices[j] - current_price;
                if(diff> max_profit)
                {
                    max_profit = diff;
                }
            }
        }
        return max_profit; 
    }
};
