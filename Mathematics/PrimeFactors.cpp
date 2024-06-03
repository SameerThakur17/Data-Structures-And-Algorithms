#include <iostream>
using namespace std;
bool isPrime(int n)
{
    /*
    Time Complexity O(root(n))
    Space Complexity O(1)
    */
    if (n == 0)
    {
        return false;
    }
    if (n == 2 || n == 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i < n; i += 6)
    {
        if (n % i == 0 || n % i + 2 == 0)
        {
            return false;
        }
    }
    return true;
}

void primefactorsNaive1(int n)
{
    /*
    Time Complexity O(n^2logn)
    Space Complexity O(1)
    */
    if (n <= 1)
    {
        return;
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            int x = i;
            while (n % x == 0)
            {
                cout << i << " ";
                x = x * i;
            }
        }
    }
}
void primefactorsNaive2(int n)
{
    /*
    Time Complexity O(n^2logn)
    Space Complexity O(1)
    */
    if (n <= 1)
    {
        return;
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            while (n % i == 0)
            {
                cout << i << " ";
                n = n / i;
            }
        }
    }
}

void primefactorsOptimized1(int n)
{

    /*
    Time Complexity O(root(n)logn)
    Space Complexity O(1)
    */
    if (n <= 1)
    {
        return;
    }
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 1)
    {
        cout << n << " ";
    }
}
void primefactorsOptimized2(int n)
{
    /*
    Time Complexity O(root(n)logn)
    Space Complexity O(1)
    */
    if (n <= 1)
    {
        return;
    }
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        cout << 3 << " ";
        n = n / 3;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
        while (n % i + 2 == 0)
        {
            cout << i + 2 << " ";
            n = n / i + 2;
        }
    }
    if (n > 3)
    {
        cout << n << " ";
    }
}
int main()
{
    // primefactorsNaive1(12);
    // cout << endl;
    // primefactorsNaive2(25);
    // cout << endl;
    // primefactorsOptimized1(17);
    primefactorsOptimized2(177);
    return 0;
}