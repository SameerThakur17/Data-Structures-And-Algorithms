#include <iostream>
using namespace std;

int countSetBitsBasic(int n)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(1)
    */
    int count = 0;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            count++;
        }

        n = n / 2;
    }
    return count;
}
int countSetBitsBitOptimized(int n)
{
    /*
    Time Complexity O(logn)
    Space Complexity O(1)
    */
    int count = 0;
    while (n > 0)
    {
        // if (n & 1)
        // {
        //     count++;
        // }
        count = count + (n & 1);
        n = n >> 1;
    }
    return count;
}
int brainKarningamAlgo(int n)
{
    /*
    Time Complexity O(k) k = number of set bits
    Space Complexity O(1)
    */
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int table[256];
void initialize()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2];
    }
}
int lookupTable(int n)
{
    /*
    Time Complexity O(1)
    Space Complexity O(1)
    */
    int res = table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    n = n >> 8;
    res = res + table[n & 0xff];
    return res;
}
int main()
{
    cout << countSetBitsBasic(13) << endl;
    cout << countSetBitsBitOptimized(13) << endl;
    cout << brainKarningamAlgo(13) << endl;
    initialize();
    cout << lookupTable(13);
    return 0;
}