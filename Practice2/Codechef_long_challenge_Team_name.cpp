#include <bits/stdc++.h>
#include <algorithm>
#include <set>
#include <vector>
#include <sstream>
#include <chrono>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        int n, count = 0;
        cin >> n;
        string names[n];
        set<char> letter;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            names[i] = s;
        }
        sort(names, names + n);
        for (int i = 0; i < n; i++)
        {
            string l = names[i];
            char a = l[0];
            letter.insert(a);
        }
        if (letter.size() == 1)
        {
            cout << "0"
                 << "\n";
        }
        else
        {

            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    s1 = names[i];
                    s2 = names[j];
                    if (s1[0] != s2[0])
                    {
                        swap(s1[0], s2[0]);
                        if (!(binary_search(names, names + n, s1)) && !(binary_search(names, names + n, s2)))
                            count = count + 2;
                    }
                }
            }
            cout << count << "\n";
        }
    }
    return 0;
}
