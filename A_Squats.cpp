#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, up = 0, down = 0, count = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'x')
        {
            down++;
        }
        else
        {
            up++;
        }
    }
    if (up == down)
    {
        cout << "0\n";
        cout << s;
    }
    else if (up < down)
    {
        for (int i = 0; i < s.length() && up != down; i++)
        {
            if (s[i] == 'x')
            {
                s[i] = 'X';
                up++;
                down--;
                count++;
            }
        }
        cout << count << "\n";
        cout << s;
    }
    else
    {
        for (int i = 0; i < s.length() && up != down; i++)
        {
            if (s[i] == 'X')
            {
                s[i] = 'x';
                up--;
                down++;
                count++;
            }
        }
        cout << count << "\n";
        cout << s;
    }

    return 0;
}