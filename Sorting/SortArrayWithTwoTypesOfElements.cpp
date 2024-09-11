#include <iostream>
using namespace std;

void sortPositiveNegativeNaive(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(n)
    */
    int temp[n];
    int i = 0;

    for (int j = 0; j < n; j++)
    {
        if (arr[j] < 0)
        {
            temp[i] = arr[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > 0)
        {
            temp[i] = arr[j];
            i++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

void sortPositiveNegativeOptimized(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int i = -1;
    int j = n;
    while (true)
    {

        do
        {
            i++;
        } while (arr[i] < 0);
        do
        {
            j--;
        } while (arr[j] > 0);
        if (i >= j)
        {
            return;
        }
        swap(arr[i], arr[j]);
    }
}

void sortEvenOdd(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int i = -1;
    int j = n;
    while (true)
    {

        do
        {
            i++;
        } while (arr[i] % 2 == 0);
        do
        {
            j--;
        } while (arr[j] % 2 != 0);
        if (i >= j)
        {
            return;
        }
        swap(arr[i], arr[j]);
    }
}

void sortBinaryArray(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int i = -1;
    int j = n;
    while (true)
    {

        do
        {
            i++;
        } while (arr[i] == 0);
        do
        {
            j--;
        } while (arr[j] == 1);
        if (i >= j)
        {
            return;
        }
        swap(arr[i], arr[j]);
    }
}
int main()
{
    int arr[4] = {10, -15, 11, -16};
    sortPositiveNegativeOptimized(arr, 4);
    // sortPositiveNegativeNaive(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    // int arr[] = {2, 17, 4, 7, 10};
    // sortEvenOdd(arr, 5);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int arr[] = {1, 0, 1, 0, 0, 1};
    // sortBinaryArray(arr, 6);
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return 0;
}