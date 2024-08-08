#include <bits/stdc++.h>
using namespace std;

// Selection Sort Naive

void selectionSortNaive(int arr[], int n)
{
    /*
    Time Complexity O(n^2)
    Space Complexity O(n)
    */
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        int min_index = 0;
        for (int j = 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        temp[i] = arr[min_index];
        arr[min_index] = INT_MAX;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

// Selection Sort Optimized

int main()
{
    int arr[6] = {10, 5, 6, 3, 8, 11};
    cout << "Unsorted array " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    selectionSortNaive(arr, 6);
    cout << "Sorted array " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}