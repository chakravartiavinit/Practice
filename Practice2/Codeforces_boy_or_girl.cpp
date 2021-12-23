#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int count = 0;
    string s;
    cin >> s;
    int a[27] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        a[s[i] - 97]++;
    }
    for (int i = 0; i < 27; i++)
    {
        if (a[i] > 0)
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!"
             << "\n";
    }
    else
    {
        cout << "IGNORE HIM!"
             << "\n";
    }

    return 0;
}
