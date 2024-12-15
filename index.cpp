#include <iostream>
using namespace std;
int convertBinary(int num)
{
    int ans = 0;
    int pow = 1;
    while (num > 0)
    {
        int last = num % 2;
        ans = ans + (last * pow);
        num /= 2;
        pow *= 10;
    };
    return ans;
};

int sumOfNumber(int num)
{
    int ans = 0;
    while (num > 0)
    {
        int last = num % 10;
        ans += last;
        num /= 10;
    };
    return ans;
};
int main()
{
    cout << convertBinary(10) << endl;
    cout << sumOfNumber(1089908) << endl;
    cout << (4 & 8) << endl;
    cout << (4 | 8) << endl;
    cout << (4 << 4) << endl;
    cout << (4 >> 4) << endl;
    return 0;
}