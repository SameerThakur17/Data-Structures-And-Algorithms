#include <bits/stdc++.h>
using namespace std;

int maxSumOfConsecutiveKElementsNaive(int arr[], int n, int k)
{
    /*
    Time Complexity O(n*k)
    Space Complexity O(1)
    */
    int maxSum = INT32_MIN;
    for (int i = 0; i < (n - k + 1); i++)
    {
        int sum = 0;
        for (int j = 0; j < k; j++)
        {
            sum += arr[i + j];
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int maxSumOfKElementsOptimized(int arr[], int n, int k)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int maxSum = INT32_MIN;
    int currSum = 0;
    for (int i = 0; i < k; i++)
    {
        currSum += arr[i];
    }
    maxSum = currSum;
    for (int i = k; i < n; i++)
    {
        currSum += arr[i] - arr[i - k];
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int main()
{
    int arr[6] = {1, 8, 30, -5, 20, 7};
    // cout << maxSumOfConsecutiveKElementsNaive(arr, 6, 3);
    cout << maxSumOfKElementsOptimized(arr, 6, 3);
    return 0;
}