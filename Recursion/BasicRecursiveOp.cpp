#include <iostream>
using namespace std;

int log2n(int n)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(logn)
    */
    if (n <= 1)
    {
        return 0;
    }
    return 1 + log2n(n / 2);
}

int log3n(int n)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(logn)
    */
    if (n < 3)
    {
        return 0;
    }
    return 1 + log3n(n / 3);
}

void binRep(int n)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(logn)
    */
    if (n == 0)
    {
        return;
    }
    binRep(n / 2);
    cout << n % 2 << " ";
}

int main()
{
    // cout << log2n(16) << endl;
    // cout << log3n(9) << endl;
    binRep(10);
    return 0;
}