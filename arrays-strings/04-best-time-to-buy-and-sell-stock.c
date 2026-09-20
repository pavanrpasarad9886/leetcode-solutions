#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int minPrice = prices[0];
    int maxProfitValue = 0;

    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }

        int profit = prices[i] - minPrice;

        if (profit > maxProfitValue) {
            maxProfitValue = profit;
        }
    }

    return maxProfitValue;
}

int main() {
    // Test Case 1
    int prices1[] = {7, 1, 5, 3, 6, 4};

    printf("Test Case 1: %d\n",
           maxProfit(prices1, 6));

    // Test Case 2 - Edge Case
    int prices2[] = {7, 6, 4, 3, 1};

    printf("Test Case 2: %d\n",
           maxProfit(prices2, 5));

    return 0;
}
