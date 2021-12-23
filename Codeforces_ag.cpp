#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int a, b;
    cin >> a >> b;

process1:
    if (a == 0 || b == 0)
    {
        cout << a << " " << b;
        return 0;
    }
    else if (a >= 2 * b)
    {
        a = a - (2 * b);
        goto process1;
    }

    else if (b >= 2 * a)
    {
        b = b - 2 * a;
        goto process1;
    }
    cout << a << " " << b;
    return 0;
}