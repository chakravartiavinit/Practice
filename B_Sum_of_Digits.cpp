#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int counter = 0;
    int len = s.length();
    while (len > 1)
    {
        int sum = 0;
        for (int i = 0; i < len; i++)
        {
            sum += s[i] - '0';
        }
        s = to_string(sum);
        len = s.length();
        ++counter;
    }
    cout << counter;
    return 0;
}
