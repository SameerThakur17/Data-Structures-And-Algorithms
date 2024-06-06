#include <iostream>
using namespace std;

// bool isSet(int n, int k)
// {
//     bool flag;
//     for (int i = 1; i <= k; i++)
//     {
//         if (n & 1)
//         {
//             flag = true;
//         }
//         else
//         {
//             flag = false;
//         }
//         n = n >> 1;
//     }
//     return flag;
// }

bool isSetLeftShift(int n, int k)
{
    /*
    Time Complexity O(1)
    Space Complexity O(1)
    */
    if ((n & (1 << (k - 1))) != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isSetRightShift(int n, int k)
{
    /*
    Time Complexity O(1)
    Space Complexity O(1)
    */
    if ((n >> (k - 1) & 1) == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    cout << isSetLeftShift(5, 3) << endl;
    cout << isSetRightShift(5, 3) << endl;
    return 0;
}