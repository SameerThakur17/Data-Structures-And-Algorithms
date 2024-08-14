#include <bits/stdc++.h>
using namespace std;

void mergeTwoSortedArraysNaive(int arr[], int brr[], int m, int n)
{
    /*
    Time Complexity O((m+n)*log(m+n))
    Space Complexity O(m+n)
    */
    int crr[m + n];
    for (int i = 0; i < m; i++)
    {
        crr[i] = arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        crr[m + j] = brr[j];
    }
    sort(crr, crr + m + n);
    for (int i = 0; i < m + n; i++)
    {
        cout << crr[i] << " ";
    }
    cout << endl;
}

void mergeTwoSprtedArraysOptimized(int arr[], int brr[], int m, int n)
{
    /*
    Time Complexity O(m+n)
    Space Complexity O(1)
    */
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr[i] <= brr[j])
        {
            cout << arr[i] << " ";
            i++;
        }
        else
        {
            cout << brr[j] << " ";
            j++;
        }
    }
    while (i < m)
    {
        cout << arr[i] << " ";
        i++;
    }
    while (j < n)
    {
        cout << brr[j] << " ";
        j++;
    }
}

int main()
{
    int arr[] = {1, 7, 9};
    int brr[] = {11, 17, 21};
    // mergeTwoSortedArraysNaive(arr, brr, 3, 3);
    mergeTwoSprtedArraysOptimized(arr, brr, 3, 3);
    return 0;
}