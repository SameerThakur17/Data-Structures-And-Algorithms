#include <iostream>
using namespace std;

int firstOccurance(int arr[], int n, int element)
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
}
int lastOccurance(int arr[], int n, int element)
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
            if (mid == n || arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
}

int countOccurances(int arr[], int n, int element)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(1)
    */
    int firstOccIndex = firstOccurance(arr, n, element);
    if (firstOccIndex == -1)
    {
        return 0;
    }
    return (lastOccurance(arr, n, element) - firstOccIndex) + 1;
}

int main()
{
    int arr[7] = {1, 5, 7, 7, 7, 8, 9};
    cout << countOccurances(arr, 7, 7);
    return 0;
}