class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if(prices.size()==0)
            return 0;
        int i=0;
        int j=i+1;
        int small_price=prices[i];
        int profit=0;
        while(i<prices.size()-1){
            j=i+1;
            if(prices[i]<small_price)
                small_price=prices[i];
            int tmp=prices[j]-small_price;
            if(tmp>profit)
                profit=tmp;
            i++;
        }
        if(profit<0)
            profit=0;
        return profit;
    }
};
