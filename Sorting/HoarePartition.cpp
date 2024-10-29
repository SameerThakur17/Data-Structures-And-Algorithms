#include <bits/stdc++.h>
using namespace std;

int hoarePartition(int arr[], int l, int h)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    Unstable Partition Algorithm
    Considers first element as pivot
    Requires less swappings than Lomuto partition
    The pivot element is not at its correct position unlike Lomuto Partition
    */
    int p = arr[l];
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < p);
        do
        {
            j--;
        } while (arr[j] > p);
        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
    }
}

int main()
{
    int arr[7] = {9, 5, 6, 7, 12, 11, 8};
    cout << hoarePartition(arr, 0, 6) << endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}