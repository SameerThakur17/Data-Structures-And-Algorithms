#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    int arr[4] = {1, 5, 6, 7};
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    reverseArray(arr, 4);
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}