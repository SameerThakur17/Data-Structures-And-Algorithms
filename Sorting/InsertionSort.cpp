#include <iostream>
using namespace std;

// Insetion Sort

void insertionSort(int arr[], int n)
{
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    Stable Algorithm
    In-place Algorithm
    Used for small sized arrays
    O(n) in best case
    */
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[6] = {10, 5, 6, 3, 8, 11};
    cout << "Unsorted array " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    insertionSort(arr, 6);
    cout << "Sorted array " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}