#include <iostream>
using namespace std;

int largestElementNaive(int arr[], int n)
{
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    */
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            return i;
        }
    }
}

int largestElementIndex(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int largest_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest_index])
        {
            largest_index = i;
        }
    }
    return largest_index;
}
int main()
{
    int brr[4] = {1, 40, 59, 7};
    cout << largestElementIndex(brr, 4) << endl;
    cout << largestElementNaive(brr, 4);
    return 0;
}