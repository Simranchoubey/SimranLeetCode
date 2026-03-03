class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0,bestBuy=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]>bestBuy) {
                maxProfit=max(maxProfit,prices[i]-bestBuy);
            }
            bestBuy=min(bestBuy,prices[i]);
        }
        return maxProfit;
    }
};

// prices = [7,1,5,3,6,4]
// maxProfit=0
// bestBuy=prices[0]=7
// i=0 
// 7>7
// bestBuy=min(bestBuy,prices[i])=min(7,7)=7
// i=1
// 1>7
// bestBuy=min(bestBuy,prices[i])=min(7,1)=1
// i=2
// 5>7
// bestBuy=min(bestBuy,prices[i])=min(7,5)=5
// i=3
// 3>7
// bestBuy=min(bestBuy,prices[i])=min(7,3)=3
// i=4
// 6>7
// bestBuy=min(bestBuy,prices[i])=min(7,6)=6
// i=5
// 4>7
// bestBuy=min(bestBuy,prices[i])=min(7,4)=4