#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    vector<int> v(4);

    for (int i = 0; i < 4; i++)
    {
        cin >> s;
        v[i] = s.size() - 2;
    }

    bool a = false, b = false;
    int ind = -1;
    string choice = "ABCD";

    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        a = true, b = true;
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
                continue;
            if (v[j] * 2 > v[i])
                a = false;
            if (v[j] < v[i] * 2)
                b = false;
        }
        if (a ^ b)
        {
            ind = i;
            cnt++;
        }
    }

    if (cnt == 1)
        cout << char(choice[ind]) << "\n";
    else
        cout << "C\n";
    return 0;
}
