#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int d[6];
int square(int a)
{
    return a * a;
}
void check(string s)
{
    int a, b, c;
    a = square(d[0] - d[2]) + square(d[1] - d[3]);
    b = square(d[2] - d[4]) + square(d[3] - d[5]);
    c = square(d[0] - d[4]) + square(d[1] - d[5]);
    if ((a && b && c) == 0)
        return;
    if (a + b == c || a + c == b || b + c == a)
    {
        cout << s;
        exit(0);
    }
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 0; i < 6; i++)
    {
        cin >> d[i];
    }
    check("RIGHT");
    for (int i = 0; i < 6; i++)
    {
        d[i]--;
        check("ALMOST");
        d[i] += 2;
        check("ALMOST");
        d[i]--;
    }
    cout << "NEITHER";

    return 0;
}