#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    
    int ans=0;
    int min_price=1000000001;


    for(int price:prices)
    {
        min_price = min(min_price,price);
        ans = max(ans, price-min_price);
    }

    return ans;
}
