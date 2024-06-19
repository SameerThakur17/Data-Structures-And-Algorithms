#include <iostream>
using namespace std;

int removeDuplicatesFromSortedArray(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(n)
    */
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++)
    {
        arr[i] = temp[i];
    }
    return res;
}

int removeDuplicatesOptimized(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[res - 1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}

int main()
{
    int arr[7] = {10, 10, 20, 30, 30, 40, 50};
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    // int newSize = removeDuplicatesFromSortedArray(arr, 7);
    int newSize = removeDuplicatesOptimized(arr, 7);
    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}