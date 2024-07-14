#include <iostream>
using namespace std;

int firstOccuranceNaive(int arr[], int n, int element)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int firstOccuranceOptimized(int arr[], int n, int element)
{
    // * Iterative Solution
    /*
    Time Complexity O(logn)
    Space Complexity O(1)
    */
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > element)
        {
            high = mid - 1;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int firstOccuranceRecursive(int arr[], int low, int high, int element)
{
    // * Recursive Solution
    /*
    Time Complexity O(logn)
    Space Complexity O(1)
    */
    if (low > high)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (arr[mid] > element)
    {
        high = mid - 1;
    }
    else if (arr[mid] < element)
    {
        low = high + 1;
    }
    else
    {
        if (mid == 0 || arr[mid - 1] != arr[mid])
        {
            return mid;
        }
        else
        {
            high = mid - 1;
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 5, 5, 6};
    // cout << firstOccuranceNaive(arr, 5, 5);
    // cout << firstOccuranceOptimized(arr, 5, 5);
    cout << firstOccuranceRecursive(arr, 0, 4, 5);
    return 0;
}