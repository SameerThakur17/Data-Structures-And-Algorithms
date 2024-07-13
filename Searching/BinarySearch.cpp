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
int main()
{
    int arr[5] = {4, 7, 9, 10, 11};
    cout << binarySearch(arr, 5, 10);
    return 0;
}