#include <bits/stdc++.h>
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
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

void primeNumbersInRange(int n)
{
    /*
    Time Complexity O(n*root(n))
    Space Complexity O(1)
    */
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}
void seiveOfEratosthnes(int n)
{
    /*
    Time Complexity O(nloglogn)
    Space Complexity O(n)
    */
    vector<bool> isPrime(n + 1, true);

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }
}

void seiveOfEratosthenesOptimized(int n)
{
    /*
    Time Complexity O(nloglogn)
    Space Complexity O(n)
    */
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << " ";
        }
    }
}

void seiveOfEratosthenesOptimized2(int n)
{
    /*
    Time Complexity O(nloglogn)
    Space Complexity O(n)
    */
    vector<bool> isPrime(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            cout << i << ' ';
            for (int j = i * i; j <= n; j = j + i)
            {
                isPrime[j] = false;
            }
        }
    }
}
int main()
{
    // primeNumbersInRange(17);
    // seiveOfErastosthnes(10);
    // seiveOfErstothenesOptimized(10);
    seiveOfEratosthenesOptimized2(25);
    return 0;
}