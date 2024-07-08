#include <iostream>
using namespace std;

int maximumSumWithCircularArrayNaive(int arr[], int n)
{
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    */
    int maxSum = arr[0];
    for (int i = 0; i < n; i++)
    {
        int currSum = arr[i];
        for (int j = 1; j < n; j++)
        {
            int index = (i + j) % n;
            currSum += arr[index];
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}

int maxNormalSum(int arr[], int n)
{
    int maxSum = arr[0];
    int currSum = arr[0];
    for (int i = 1; i < n; i++)
    {
        currSum = max(currSum + arr[i], arr[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int maximumSumWithCircularArrayOptimized(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int maxNormalSumOfArray = maxNormalSum(arr, n);
    if (maxNormalSumOfArray < 0)
    {
        return maxNormalSumOfArray;
    }
    int arraySum = 0;
    for (int i = 0; i < n; i++)
    {
        arraySum += arr[i];
        arr[i] = -arr[i];
    }
    int maxCircularSum = arraySum + maxNormalSum(arr, n);
    return max(maxNormalSumOfArray, maxCircularSum);
}

int main()
{
    int arr[6] = {3, -4, 5, 6, -8, 7};
    // cout << maximumSumWithCircularArrayNaive(arr, 6);
    cout << maximumSumWithCircularArrayOptimized(arr, 6);
    return 0;
}