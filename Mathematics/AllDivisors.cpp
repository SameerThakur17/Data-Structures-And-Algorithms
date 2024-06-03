#include <iostream>
using namespace std;

void allDivisorsNaive(int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(1)
    */
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}
void allDivisorsOptimized(int n)
{
    /*
    Time Complexity O(sqrt(n))
    Space Complexity O(1)
    */
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i)
            {
                cout << n / i << " ";
            }
        }
    }
}
void allDivisorsOptimized2(int n)
{
    /*
    Time Complexity O(sqrt(n))
    Space Complexity O(1)
    */
    int i;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    i = i - 1;
    for (; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << n / i << " ";
        }
    }
}

int main()
{
    // allDivisorsNaive(17);
    // cout << endl;
    // allDivisorsOptimized(12);
    // cout << endl;
    allDivisorsOptimized2(12);
    return 0;
}