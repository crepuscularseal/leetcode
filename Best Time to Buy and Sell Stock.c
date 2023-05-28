

int maxProfit(int* prices, int pricesSize){
    
    int maxprofit = 0;
    int temp = 0;    
    for(int i = 0 ;i<pricesSize;i++)
    {
        for(int j = i+1;j<pricesSize;j++)
        {
            temp = prices[j] - prices[i];
            if(temp>maxprofit)
            {
                maxprofit = temp;
            }
        }
    }    
    return maxprofit;
}

/*
// Buy at the lowest point and sell at the highest point, 
// so go through and remember the lowest price, and then find the highest profit and remember it

int maxProfit(int* prices, int pricesSize){
    int buy = 10001; //over limit
    int maxprofit  = 0;
    for(int i =0;i<pricesSize;i++)
    {
        if(prices[i]<buy) buy = prices[i];
        
        if(maxprofit<(prices[i]-buy)) maxprofit = prices[i]-buy;
    }
    return maxprofit;
}


*/