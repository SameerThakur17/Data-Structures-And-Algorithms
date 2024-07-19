#include <iostream>
using namespace std;

// *Find the sum of elements in a range
// Naive Approach O(n) Time Complexity
int findSumOfConsecutiveElements(int arr[], int left, int right)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int sum = 0;
    for (int i = left; i <= right; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int findSum(int preSum[], int left, int right)
{
    if (left == 0)
    {
        return preSum[right];
    }
    else
    {
        return preSum[right] - preSum[left - 1];
    }
}
// Optimized Approach O(1) Time Complexity
int findSumOfConsecutiveElementsPrefixSum(int arr[], int n, int left, int right)
{
    /*
    Time Complexity O(1)
    Space Complexity O(n)
    */
    int prefixSumArray[n];
    prefixSumArray[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSumArray[i] = prefixSumArray[i - 1] + arr[i];
    }
    return findSum(prefixSumArray, left, right);
}

int main()
{
    int arr[5] = {1, 4, 8, 23, 5};
    // cout << findSumOfConsecutiveElements(arr, 0, 3);
    cout << findSumOfConsecutiveElementsPrefixSum(arr, 5, 0, 3);
    return 0;
}