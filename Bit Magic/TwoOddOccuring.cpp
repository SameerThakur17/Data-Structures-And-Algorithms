#include <iostream>
using namespace std;

void twoOddOccuringNaive(int arr[], int n)
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
            cout << arr[i] << " ";
        }
    }
}
void twoOddOccuringOptimized(int arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
     */
    int XOR = 0, res1 = 0, res2 = 0;
    for (int i = 0; i < n; i++)
    {
        XOR ^= arr[i];
    }
    int sl = XOR & ~(XOR - 1);
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & sl) != 0)
        {
            res1 = res1 ^ arr[i];
        }
        else
        {
            res2 = res2 ^ arr[i];
        }
    }
    cout << res1 << " " << res2 << endl;
}
int main()
{
    int arr[6] = {1, 2, 1, 2, 3, 4};
    // twoOddOccuringNaive(arr, 6);
    twoOddOccuringOptimized(arr, 6);
    return 0;
}