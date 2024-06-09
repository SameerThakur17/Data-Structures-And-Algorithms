#include <iostream>
using namespace std;

int oddOccuringNumber(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}
int oddOccuringNumberNaive(int arr[], int n)
{
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    */
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count % 2 != 0)
        {
            return arr[i];
        }
    }
}

int main()
{
    int arr[7] = {1, 2, 3, 2, 1, 3, 4};
    cout << oddOccuringNumber(arr, 7) << endl;
    cout << oddOccuringNumberNaive(arr, 7);
    return 0;
}