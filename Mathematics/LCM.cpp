#include <bits/stdc++.h>
using namespace std;

int LCMBasic(int a, int b)
{
    /*
    Time Complexity O(a*b-max(a,b))
    Space Complexity O(1)
    */
    int res = max(a, b);

    while (true)
    {
        if (res % a == 0 && res % b == 0)
        {
            break;
        }
        res++;
    }
    return res;
}

int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return GCD(b, a % b);
}
int LCMOptimized(int a, int b)
{
    /*
    Time Complexity O(log(min(a,b)))
    Space Complexity O(log(min(a,b)))
    */
    return a * b / GCD(a, b);
}

int main()
{
    cout << LCMBasic(8, 12) << endl;
    cout << LCMOptimized(2, 4);
    return 0;
}