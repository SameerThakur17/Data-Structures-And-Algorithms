#include <iostream>
using namespace std;

void Nto1(int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(n)
    */
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    Nto1(n - 1);
}
void OneToN(int n)
{
    /*
    Time Complexity O(n)
    Space Complexity O(n)
    */
    if (n == 0)
    {
        return;
    }
    OneToN(n - 1);
    cout << n << " ";
}

int main()
{
    Nto1(10);
    cout << endl;
    OneToN(10);
    return 0;
}