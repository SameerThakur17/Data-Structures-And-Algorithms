#include <iostream>
using namespace std;

void frequencies(int arr[], int n)
{
    int i = 1, freq = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq << endl;
        i++;
        freq = 1;
    }
    if (n == 1 || (arr[n - 1] != arr[n - 2]))
    {
        cout << arr[n - 1] << " " << 1 << endl;
    }
}
int main()

{
    int arr[5] = {7, 7, 10, 10, 17};
    frequencies(arr, 5);

    return 0;
}