#include <iostream>
using namespace std;

int leftShift(int n, int x)
{
    /*
    Time Complexity O(1)
    Space Complexity O(1)
    */
    return n << x;
}

int rightShift(int n, int x)
{
    /*
    Time Complexity O(1)
    Space Complexity O(1)
    */
    return n >> x;
}
int bitwise_not(int n)
{
    /*
    Time Complexity O(1)
    Space Complexity O(1)
    */
    return ~n;
}
int main()
{
    cout << leftShift(8, 1) << endl;
    cout << rightShift(8, 1) << endl;
    cout << bitwise_not(8);

    return 0;
}