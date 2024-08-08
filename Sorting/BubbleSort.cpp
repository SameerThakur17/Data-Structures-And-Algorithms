#include <bits/stdc++.h>
using namespace std;

// Bubble Sort Naive

void bubbleSortNaive(int arr[], int n)
/*
    Time Complexity O(n^2)
    Space Complexity O(1)
    Stable Algorithm
    In Place Algorithm ie doesn't require additional array
*/
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Bubble Sort Optimized 1
void bubbleOptimized(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Bubble Sort Optimized 2
// To handle the case where the input array is sorted or becomes sorted in between executions

void bubbleSortWhenArraySorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int arr[6] = {10, 5, 6, 3, 8, 11};
    cout << "Unsorted array " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // bubbleSortNaive(arr, 6);
    bubbleOptimized(arr, 6);
    cout << "Sorted array " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}