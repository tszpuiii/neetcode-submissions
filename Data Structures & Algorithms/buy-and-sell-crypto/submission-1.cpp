class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro = 0;
        for(int i =0; i < prices.size(); i++){
            int buy = prices[i];
            for(int j = i + 1; j < prices.size(); j++){
                int sell = prices[j];
                pro = max(pro, sell - buy);
            }
        }
        return pro;
    }
};
