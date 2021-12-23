#include <bits/stdc++.h>
using namespace std;
bool check(long long int a)
{
    int sum = 0;
    while (a)
    {
        if (a % 10 == 4 || a % 10 == 7)
        {
            sum++;
        }
        a = a / 10;
    }
    if (sum==4 || sum == 7)
    {
        return true;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int a;
    cin >> a;
    if (check(a)) //Can we use boolalpha and ternary operator?
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
