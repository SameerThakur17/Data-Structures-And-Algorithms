#include <iostream>
using namespace std;

void min_cons_flips_naive(bool arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
            {
                cout << "From " << i << " to ";
            }
            else
            {
                cout << (i - 1) << endl;
            }
        }
    }
    if (arr[n - 1] != arr[0])
    {
        cout << (n - 1) << endl;
    }
}

int main()
{
    bool arr[5] = {1, 1, 0, 0, 1};
    min_cons_flips_naive(arr, 5);
    return 0;
}