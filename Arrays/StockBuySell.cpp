#include <bits/stdc++.h>
using namespace std;

int maxProfit(int arr[], int start, int end)
{
    /*
    Time Complexity O(2^n)
    Space Complexity O(n)
    */
    if (end <= start)
    {
        return 0;
    }
    int profit = 0;
    for (int i = start; i < end; i++)
    {
        for (int j = i + 1; j <= end; j++)
        {
            if (arr[j] > arr[i])
            {
                int curr_profit = arr[j] - arr[i] + maxProfit(arr, start, i - 1) + maxProfit(arr, j + 1, end);
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}
int stockBuySellOptimized(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += arr[i] - arr[i - 1];
        }
    }
    return profit;
}

int main()
{
    int arr[6] = {7, 1, 5, 3, 6, 4};
    // cout << maxProfit(arr, 0, 4);
    cout << stockBuySellOptimized(arr, 5);
    return 0;
}