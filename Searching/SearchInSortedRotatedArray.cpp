#include <iostream>
using namespace std;

int searchInSortedRotatedArrayNaive(int arr[], int n, int element)
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
int searchInSortedRotatedArrayOptimized(int arr[], int n, int element)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(1)
    */
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[low] < arr[mid])
        {
            if (arr[low] <= element && arr[mid] >= element)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (arr[mid] <= element && arr[high] >= element)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    // int arr[7] = {5, 6, 7, 1, 2, 3, 4};
    int arr2[] = {10, 20, 40, 60, 5, 8};
    // cout << searchInSortedRotatedArrayNaive(arr, 7, 7);
    // cout << searchInSortedRotatedArrayOptimized(arr, 7, 7);
    cout << searchInSortedRotatedArrayOptimized(arr2, 6, 0);
    return 0;
}