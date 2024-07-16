#include <iostream>
using namespace std;

int peakElementInArrayNaive(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    if (n == 0)
        return arr[0];
    if (arr[0] > arr[1])
        return arr[0];
    if (arr[n - 1] > arr[n - 1])
        return arr[n - 1];
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            return arr[i];
        }
    }
}

int peakElementInArrayOptimized(int arr[], int n)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(1)
    */
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid] >= arr[mid + 1]))
        {
            return mid;
        }
        if (mid > 0 && arr[mid] <= arr[mid - 1])
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
int main()
{
    // int arr[5] = {5, 7, 8, 6, 5};
    int arr[6] = {5, 50, 40, 15, 25, 7};
    // cout << peakElementInArrayNaive(arr, 5);
    cout << peakElementInArrayOptimized(arr, 6);
    return 0;
}