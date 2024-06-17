#include <iostream>
using namespace std;

int insert(int arr[], int n, int capacity, int position, int element)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    if (n == capacity)
    {
        return n;
    }
    int index = position - 1;

    for (int i = n - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return n + 1;
}
int remove(int arr[], int n, int element)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            break;
        }
    }
    if (i == n)
    {
        return n;
    }
    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    return n - 1;
}

int main()
{
    int arr[4] = {1, 3, 2};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    // insertion
    // int res = insert(arr, 3, 4, 2, 10);
    // cout << endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // deletion
    int res = remove(arr, 3, 3);
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}