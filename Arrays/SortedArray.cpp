#include <iostream>
using namespace std;

bool isArraySortedNaive(int arr[], int n)
{
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                return false;
            }
        }
    }
    return true;
}

bool isArraySorted(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[4] = {4, 4, 85, 7};
    // cout << isArraySorted(arr, 4);
    cout << isArraySortedNaive(arr, 4);
    return 0;
}