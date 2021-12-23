#include <bits/stdc++.h>
using namespace std;
int checkx(int x, int a)
{
    if (a == x)
    {
        return 0;
    }
    else
    {

        if (a > x)
        {
            return 1;
        }
        return -1;
    }
}
int checky(int y, int b)
{
    if (b == y)
    {
        return 0;
    }
    else
    {

        if (b > y)
        {
            return 1;
        }
        return -1;
    }
}
void checkfinal(int final)
{
    if (final == 2)
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int x = 0, y = 0, u = 0, d = 0, r = 0, l = 0;
        int flag = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'U')
            {
                u++;
            }
            else if (s[i] == 'D')
            {
                d++;
            }
            else if (s[i] == 'R')
            {
                r++;
            }
            else if (s[i] == 'L')
            {
                l++;
            }
        }
        if (checkx(x, a) > 0)
        {
            if (r >= a)
            {
                flag++;
            }
        }
        else
        {
            if (l >= abs(a))
            {
                flag++;
            }
        }

        if (checky(y, b) > 0)
        {
            if (u >= b)
            {
                flag++;
            }
        }
        else
        {
            if (d >= abs(b))
            {
                flag++;
            }
        }
        checkfinal(flag);
    }
    return 0;
}