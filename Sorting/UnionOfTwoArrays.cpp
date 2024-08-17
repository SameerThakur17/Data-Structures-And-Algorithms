#include <bits/stdc++.h>
using namespace std;

// Naive Approach
void unionOfTwoArraysNaive(int arr[], int brr[], int m, int n)
{
    /*
    Time Complexity O(n+m*log(m+n))
    Space Complexity O(m+n)
    */
    int crr[m + n];
    for (int i = 0; i < m; i++)
    {
        crr[i] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        crr[m + i] = brr[i];
    }
    sort(crr, crr + m + n);
    for (int i = 0; i < m + n; i++)
    {
        if (i == 0 || crr[i] != crr[i - 1])
        {
            cout << crr[i] << " ";
        }
    }
}

// Optimized Approach
void unionOfTwoArrays(int arr[], int brr[], int m, int n)
{
    /*
    Time Complexity O(m+n)
    Space Complexity O(1)
    */
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            i++;
        }
        if (j > 0 && brr[j] == brr[j - 1])
        {
            j++;
        }
        if (arr[i] < brr[j])
        {
            cout << arr[i] << " ";
            i++;
        }
        else if (arr[i] > brr[j])
        {
            cout << brr[j] << " ";
            j++;
        }
        else
        {
            cout << arr[i] << " ";
            i++;
            j++;
        }
    }
    while (i < m && arr[i] != arr[i - 1])
    {
        cout << arr[i] << " ";
        i++;
    }
    while (j < n && brr[j] != brr[j - 1])
    {
        cout << brr[j] << " ";
        j++;
    }
}
int main()
{
    int arr[6] = {1, 2, 2, 3, 3, 5};
    int brr[7] = {2, 3, 3, 4, 4, 5, 5};
    // unionOfTwoArraysNaive(arr, brr, 6, 7);
    unionOfTwoArrays(arr, brr, 6, 7);
    return 0;
}