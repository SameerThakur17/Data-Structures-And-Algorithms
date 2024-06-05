#include <iostream>
using namespace std;

int bitwise_and(int a, int b)
{
    return a & b;
}
int bitwise_or(int a, int b)
{
    return a | b;
}
int bitwise_xor(int a, int b)
{
    return a ^ b;
}

int main()
{
    cout << bitwise_and(2, 3) << endl;
    cout << bitwise_or(2, 3) << endl;
    cout << bitwise_xor(2, 3) << endl;

    return 0;
}