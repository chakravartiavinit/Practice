#include <iostream>
using namespace std;
int gcd(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,x=-999,y=-999;
    cin>>a>>b;
    cout<<x<<" "<<y<<" "<<gcd(a,b,x,y);
    return 0;
}
