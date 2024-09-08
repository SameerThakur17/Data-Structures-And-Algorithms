#include <iostream>
using namespace std;

void sortPositiveNegativeOptimized(int arr[], int n)
{
    int i = -1;
    int j = n;
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

int main()
{
    int arr[4] = {10, -15, 11, -16};
    sortPositiveNegativeOptimized(arr, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}