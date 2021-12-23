#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    unordered_set<string> names;
    vector<string> names1;
    set<char> letter;
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        string s1, s2;
        long n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            names.insert(s);
            names1.push_back(s);
            letter.insert(s[0]);
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
                    s1 = names1[i];
                    s2 = names1[j];
                    if (s1[0] != s2[0])
                    {
                        swap(s1[0], s2[0]);
                        if (!(names.find(s1) != names.end()) && !(names.find(s2) != names.end()))
                        {
                            count = count + 2;
                        }
                    }
                }
            }
            cout << count << "\n";
        }
    }
    return 0;
}
