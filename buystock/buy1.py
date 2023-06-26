def maxProfit(prices) -> int:
    l,r=0,1
    maxp= 0
    while r<len(prices):
        if prices[l]<prices[r]:
            profit = prices[r]-prices[l]
            maxp = max(profit,maxp)
        else:
            l = r
        r += 1
    return maxp

profit = maxProfit([7,1,5,3,6,4])
print(profit)
