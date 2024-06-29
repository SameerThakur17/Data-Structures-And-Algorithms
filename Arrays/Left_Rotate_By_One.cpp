#include <iostream>
using namespace std;

void left_rotate_by_1(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int last = arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = last;
}

int main()
{
    int arr[5] = {1, 5, 6, 7, 8};

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    left_rotate_by_1(arr, 5);
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}