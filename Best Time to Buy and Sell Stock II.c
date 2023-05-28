int maxProfit(int* prices, int pricesSize){
    int buy = 0;
    int sold = 0;
    int profit = 0;  
    int maxprofit = 0;
    for(int i = 0;i<pricesSize-1;i++)
    {
        buy = prices[i];
        sold = prices[i+1];
        profit = sold-buy;
        if(profit>0)
        {
            maxprofit = maxprofit+profit;
        }
    }
    return maxprofit;
}