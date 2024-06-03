#include <bits/stdc++.h>

using namespace std;

int GCDNaive(int a, int b)
{
    /*
    Time Complexity O(min(a,b))
    Space Complexity O(1)
    */
    int res = min(a, b);
    while (res > 0)
    {
        if (a % res == 0 && b % res == 0)
        {
            break;
        }
        res--;
    }
    return res;
}

int GCDEuclid(int a, int b)
{
    /*
    Time Complexity O(max(a,b))
    Space Complexity O(1)
    */
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int GCDEuclidOptimized(int a, int b)
{
    /*
    Time Complexity O(log(min(a,b)))
    Space Complexity O(log(min(a,b)))
    */
    if (b == 0)
    {
        return a;
    }
    return GCDEuclidOptimized(b, a % b);
}
int main()
{
    // cout << GCDNaive(11, 15);
    cout << GCDNaive(8, 12);
    return 0;
}