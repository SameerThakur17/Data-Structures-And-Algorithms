#include <iostream>
using namespace std;

int bitwise_and(int a, int b)
{
    /*
    Time Complexity O(1)
    Space Complexity O(1)
    */
    return a & b;
}
int bitwise_or(int a, int b)
{
    /*
    Time Complexity O(1)
    Space Complexity O(1)
    */
    return a | b;
}
int bitwise_xor(int a, int b)
{
    /*
    Time Complexity O(1)
    Space Complexity O(1)
    */
    return a ^ b;
}

int main()
{
    cout << bitwise_and(2, 3) << endl;
    cout << bitwise_or(2, 3) << endl;
    cout << bitwise_xor(2, 3) << endl;

    return 0;
}