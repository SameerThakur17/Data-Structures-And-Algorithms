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

    //* Sliding Window
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

bool subArraySumOfSizeK(int arr[], int n, int k, int sum)
{
    //* Sliding Window
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int currSum = 0;
    for (int i = 0; i < k; i++)
    {
        currSum += arr[i];
    }
    if (currSum == sum)
    {
        return true;
    }
    for (int i = k; i < n; i++)
    {
        currSum += arr[i] - arr[i - k];
        if (currSum == sum)
        {
            return true;
        }
    }
    return false;
}

bool isSubArraySumNaive(int arr[], int n, int sum)
{
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    */
    for (int i = 0; i < n; i++)
    {
        int currSum = 0;
        for (int j = i; j < n; j++)
        {
            currSum += arr[j];
            if (currSum == sum)
            {
                return true;
            }
        }
    }
    return false;
}
bool isSubArraySumSlidingWindow()
{
    // * Works for only positive array elements
}

int main()
{
    // int arr[6] = {1, 8, 30, -5, 20, 7};
    // cout << maxSumOfConsecutiveKElementsNaive(arr, 6, 3);
    // cout << maxSumOfKElementsOptimized(arr, 6, 3);
    // cout << subArraySumOfSizeK(arr, 6, 3, 44);

    int brr[6] = {1, 4, 20, 3, 10, 5};
    cout << isSubArraySumNaive(brr, 6, 39);
    return 0;
}