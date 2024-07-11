#include <iostream>
using namespace std;

void min_cons_flips_optimized(bool arr[], int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
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
void min_cons_flips_naive(bool arr[], int n)
{
    /*
     Time Complexity O(n)
     Space Complexity O(1)
     */
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            while (arr[i + 1] != 1)
            {
                i++;
            }
            zeroCount += 1;
        }
        else
        {
            while (arr[i + 1] != 0)
            {
                i++;
            }
            oneCount += 1;
        }
    }

    cout << "zero count " << zeroCount << " one count " << oneCount << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            if (zeroCount < oneCount)
            {
                cout << "flip from " << i << " ";
                while (arr[i] != 1)
                {
                    arr[i] = 1;
                    i++;
                }
                cout << "to " << i - 1 << endl;
            }
        }
        else if (arr[i] == 1)
        {
            if (zeroCount > oneCount)
            {
                cout << "flip from " << i << " ";
                while (arr[i] != 0)
                {
                    arr[i] = 0;
                    i++;
                }
                cout << "to " << i - 1 << endl;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    bool arr[11] = {1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1};
    // min_cons_flips_optimized(arr, 5);
    min_cons_flips_naive(arr, 11);
    return 0;
}