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
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}
int brainKarningamAlgo(int n)
{
    /*
    Time Complexity O(k) k= number of set bits
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

int main()
{
    cout << countSetBitsBasic(13) << endl;
    cout << countSetBitsBitOptimized(13) << endl;
    cout << brainKarningamAlgo(13);
    return 0;
}