#include <bits/stdc++.h>
using namespace std;

int kthSmallestElementNaive(int arr[], int n, int k)
{
    /*
    Time Complexity O(nlogn)
    Space Complexity O(n) (Both quick sort and merge sort requires O(n) in stack)
    */
    sort(arr, arr + n);
    return arr[k - 1];
}

int lomutoPartition(int arr[], int l, int h)
{
    int i = l - 1;
    int p = arr[h];

    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < p)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i + 1;
}

int kthSmallestElementOptimized(int arr[], int n, int k)
{
    /*
    Time Complexity O(n^2) Worst Case and O(n) on average
    Space Complexity O(1)
    */
    int l = 0;
    int h = n - 1;
    while (l <= h)
    {
        int p = lomutoPartition(arr, l, h);
        if (p == k - 1)
        {
            return arr[p];
        }
        else if (p > k - 1)
        {
            h = p - 1;
        }
        else
        {
            l = p + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 4, 8, 12, 7};
    // cout << kthSmallestElementNaive(arr, 5, 3)
    cout << kthSmallestElementOptimized(arr, 5, 3);
    return 0;
}