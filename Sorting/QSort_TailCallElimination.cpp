#include <iostream>
using namespace std;

int hoarePartition(int arr[], int l, int h)
{
    int p = arr[l];
    int i = l - 1;
    int j = h + 1;
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

void qSort(int arr[], int l, int h)
{
begin:
    if (l < h)
    {
        int p = hoarePartition(arr, l, h);
        qSort(arr, l, p);
        l = p + 1;
        goto begin;
    }
}

int main()
{
    int arr[6] = {11, 7, 10, 27, 1, 4};
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    qSort(arr, 0, 5);
    cout << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}