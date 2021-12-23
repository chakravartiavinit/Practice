#include <bits/stdc++.h>
#define pie 3.14
using namespace std;
int square(int a)
{
    return a * a;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, r;
    cin >> a >> b >> r;
    if (2 * r > min(a, b))
    {
        cout << "Second\n";
    }
    else
    {
        cout << "First\n";
    }

    return 0;
}