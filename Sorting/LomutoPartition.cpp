#include <bits/stdc++.h>
using namespace std;

int lomutoPartition(int arr[], int l, int h)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    Unstable Partition Algorithm
    Considers last element as pivot
    Requires more swappings than Haore partition
    The pivot is at the correct position unlike Hoare Partition
    */
    int p = arr[h];
    int i = l - 1;

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

// Lomuto Partition if pivot is not the last element

int lomutoPartitionRandomPivot(int arr[], int l, int h, int pivot)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    swap(arr[pivot], arr[h]);
    int p = arr[h];
    int i = l - 1;

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

int main()
{
    int arr[7] = {5, 13, 6, 9, 12, 11, 8};
    // cout << lomutoPartition(arr, 0, 6) << endl;
    cout << lomutoPartitionRandomPivot(arr, 0, 6, 3) << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}