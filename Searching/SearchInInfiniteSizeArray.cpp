#include <iostream>
using namespace std;

int searchInInfiniteSizeArrayNaive(int arr[], int n, int element)
{
    /*
    Time Complexity O(position_of_element)
    Space Complexity O(1)
    */
    int i = 0;
    while (true)
    {
        if (arr[i] == element)
            return i;
        if (arr[i] > element)
            return -1;
        i++;
    }
}

int binarySearch(int arr[], int low, int high, int element)
{
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
            return mid;
        }
    }
    return -1;
}
int searchInInfiniteSizeArrayOptimized(int arr[], int n, int element)
{
    // * Unbounded Binary Search
    /*
    Time Complexity O(log(position_of_element))
    Space Complexity O(1)
    */
    if (arr[0] == element)
        return 0;
    int i = 1;
    while (arr[i] < element)
    {
        i = i * 2;
    }
    if (arr[i] == element)
    {
        return i;
    }
    return binarySearch(arr, i / 2 + 1, i - 1, element);
}
int main()
{
    int arr[10] = {1, 4, 5, 7, 8, 9, 11, 17, 20, 23};
    // cout << searchInInfiniteSizeArrayNaive(arr, 10, 11);
    // cout << searchInInfiniteSizeArrayNaive(arr, 10, 12);
    cout << searchInInfiniteSizeArrayOptimized(arr, 10, 11);

    return 0;
}