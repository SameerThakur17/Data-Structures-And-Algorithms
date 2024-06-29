#include <iostream>
using namespace std;

void leadersInArraynaive(int arr[], int n)
{
    /*
    Time Complexity O(n^2)
    Space Complexity O(1)
    */
    for (int i = 0; i < n; i++)
    {
        int flag = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << arr[i] << " ";
        }
    }
}
void leadersInArrayOptimized(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    int curr_leader = arr[n - 1];
    cout << curr_leader << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] > curr_leader)
        {
            cout << arr[i] << " ";
            curr_leader = arr[i];
        }
    }
}

int main()
{
    int arr[5] = {3, 15, 8, 6, 5};
    // leadersInArraynaive(arr, 5);
    leadersInArrayOptimized(arr, 5);
    return 0;
}