#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int index = 0, sum1 = 0, sum2 = 0, index1 = 0, index2 = 0;
    string s;
    cin >> s;
    int i = 0, j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '^')
        {
            index = i;
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (i < index)
        {
            if (s[i] > 0 && s[i] < 10)
            {
                sum1 = sum1 + (s[i] - '0');
                index1 = index1 + i;
            }
        }
        else
        {
            if (s[i] > 0 && s[i] < 10)
            {
                sum2 = sum2 + (s[i] - '0');
                index2 = index2 + i;
            }
        }
    }
    if (index1 == index2)
    {
        cout << "Balanced\n";
    }
    else
    {
        if (sum1 > sum2)
        {
            cout << "left\n";
        }
        else
        {
            cout << "right\n";
        }
    }

    return 0;
}