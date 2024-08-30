#include <iostream>
using namespace std;

// Naive Approach
int arrayInversionNaive(int arr[], int n)
{
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    */
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    return count;
}

// Optimized Approach
int countAndSort(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int left[n1];
    int right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i] = arr[m + 1 + i];
    }
    int i = 0, j = 0, k = l, res = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
            res += n1 - i;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
    return res;
}

int arrayInversionOptimized(int arr[], int l, int r)
{
    int res = 0;
    if (l < r)
    {
        int m = l + (r - l) / 2;
        res += arrayInversionOptimized(arr, l, m);
        res += arrayInversionOptimized(arr, m + 1, r);
        res += countAndSort(arr, l, m, r);
    }
    return res;
}

int main()
{
    int arr[5] = {2, 4, 1, 3, 5};
    // cout << arrayInversionNaive(arr, 5);
    cout << arrayInversionOptimized(arr, 0, 4);
    return 0;
}