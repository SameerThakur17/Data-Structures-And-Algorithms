#include <iostream>
using namespace std;

void towerOfHanoi(int n, char a, char b, char c)
{
    /*
    Time Complexity O(2^n)
    Space Complexity O(n)
    */
    if (n == 1)
    {
        cout << "Move" << " " << n << " " << "from" << " " << a << " " << "to" << " " << c << " " << "using" << " " << b << endl;
        return;
    }
    towerOfHanoi(n - 1, a, c, b);
    cout << "Move" << " " << n << " " << "from" << " " << a << " " << "to" << " " << c << " " << "using" << " " << b << endl;
    towerOfHanoi(n - 1, b, a, c);
}

int main()
{
    towerOfHanoi(2, 'A', 'B', 'C');
    return 0;
}