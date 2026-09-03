
prices = [7,1,5,3,6,4]
mini = prices[0]
profit = 0

for i in range(1, len(prices)):
    sell = prices[i] - mini
    profit = max(profit, sell)
    mini = min(mini, prices[i])

print(profit)