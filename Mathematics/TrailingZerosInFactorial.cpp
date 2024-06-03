#include <iostream>
using namespace std;

int trailingZerosNaive(int n)
{
    /*
        Time Complexity O(n)
        Space Complexity O(1)
        ! This solution causes memory overflow as the computaion of large values of factorial will overflow the memory capacity of datatype
    */
    int fact = 1, count = 0;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }

    while (fact % 10 == 0)
    {
        count++;
        fact = fact / 10;
    }
    return count;
}
int trailingZerosOptimized(int n)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(1)
    */
    int count = 0;

    for (int i = 5; i <= n; i *= 5)
    {
        count = count + n / i;
    }
    return count;
}

int main()
{
    cout << trailingZerosNaive(20) << endl;
    // cout << trailingZerosOptimized(25);
    return 0;
}