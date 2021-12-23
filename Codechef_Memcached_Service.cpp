#include <bits/stdc++.h>
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
        bool error = false;
        int n, flag = 1;
        cin >> n;
        vector<string> words;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            words.push_back(s);
        }
        for (int i = 0; i < words.size(); i++)
        {
            if (words[i] == "start")
            {
                flag = 0;
            }
            else if (words[i] == "restart")
            {
                flag = 0;
            }
            else if (words[i] == "stop")
            {
                if (flag == 1)
                {
                    error = true;
                }
                else
                {
                    flag = 1;
                }
            }
        }
        error == true ? cout << "404\n" : cout << "200\n";
    }
    return 0;
}
