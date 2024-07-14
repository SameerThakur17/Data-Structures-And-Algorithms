#include <iostream>
using namespace std;

int lastOccuranceNaive(int arr[], int n, int element)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int lastOccuranceRecursive(int arr[], int low, int high, int element, int n)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(logn)
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
        low = mid + 1;
    }
    else
    {
        if (mid == n - 1 || arr[mid] != arr[mid + 1])
        {
            return mid;
        }
        else
        {
            low = mid + 1;
        }
    }
}
int lastOccuranceIterative(int arr[], int n, int element)
{
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
            if (mid == n - 1 || arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {4, 7, 7, 9, 10};
    // cout << lastOccuranceNaive(arr, 5, 7);
    // cout << lastOccuranceRecursive(arr, 0, 4, 7, 5);
    cout << lastOccuranceIterative(arr, 5, 7);
    return 0;
}