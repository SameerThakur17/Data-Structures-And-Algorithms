#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int element)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(1)
    */
    //* Works only for sorted arrays
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int binarySearchRecursive(int arr[], int element, int low, int high)
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
    if (arr[mid] == element)
    {
        return mid;
    }
    else if (arr[mid] > element)
    {
        return binarySearchRecursive(arr, element, low, mid - 1);
    }
    else
    {
        return binarySearchRecursive(arr, element, mid + 1, high);
    }
}

int main()
{
    int arr[5] = {4, 7, 9, 10, 11};
    // cout << binarySearch(arr, 5, 10);
    cout << binarySearchRecursive(arr, 10, 0, 5);
    return 0;
}