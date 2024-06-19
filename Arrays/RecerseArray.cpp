#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    int arr[5] = {1, 51, 81, 16, 17};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    reverseArray(arr, 5);
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}