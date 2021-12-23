#include <bits/stdc++.h>
using namespace std;
bool check(char a)
{
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        return true;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int count1 = 0, count2 = 0, count3 = 0;
    string vowel = "aeiou";
    string first, second, third;
    getline(cin, first);
    getline(cin, second);
    getline(cin, third);
    for (int i = 0; i < first.size(); i++)
    {
        if (check(first[i]))
        {
            count1++;
        }
    }

    for (int i = 0; i < second.size(); i++)
    {
        if (check(second[i]))
        {
            count2++;
        }
    }

    for (int i = 0; i < third.size(); i++)
    {
        if (check(third[i]))
        {
            count3++;
        }
    }
    if (count1 == 5 && count2 == 7 && count3 == 5)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}