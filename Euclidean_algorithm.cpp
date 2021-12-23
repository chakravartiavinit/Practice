#include <iostream>
using namespace std;
int gcdfunc(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcdfunc(b, a % b);
    }
}
int gcd(int a, int b)
{
    while (b)
    {
        a = a % b;
        swap(a, b);
    }
    return a;
}
int main(int argc, char const *argv[])
{
    cout << gcdfunc(81, 81 * 81 * 9);
    return 0;
}
