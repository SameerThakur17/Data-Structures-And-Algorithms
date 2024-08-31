#include <iostream>
using namespace std;

// Quick Sort
/*
    Divide and Conquer Algorithm
    Average Case O(nlogn) and Worst Case O(n^2)
    In Place Algorithm as it does'nt use auixilary arrays
    In is not a stable algorithm (if implemeted with lomuto or hoare partition)
    It is cache friendly
    Uses tail recursion ie it can be optimized using loop
    It is used in many standard library functions of many programming languages
    Useful when stablity is not required
    Works faster than merge sort

*/

int lomutoPartition(int arr[], int l, int h)
{
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
int hoarePartition(int arr[], int l, int h)
{
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

void qSortLomuto(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = lomutoPartition(arr, l, h);
        qSortLomuto(arr, l, p - 1);
        qSortLomuto(arr, p + 1, h);
    }
}
void qSortHoare(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = hoarePartition(arr, l, h);
        qSortHoare(arr, l, p);
        qSortHoare(arr, p + 1, h);
    }
}

int main()
{
    int arr[6] = {11, 7, 10, 27, 1, 4};
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // qSortLomuto(arr, 0, 5);
    qSortHoare(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}