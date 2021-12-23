#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unordered_set<string> st;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        vector<string> alpha;
        for (int i = 0; i < n; ++i)
        {
            string a;
            cin >> a;
            st.insert(a);
            alpha.push_back(a);
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (alpha[i] == alpha[i + 1])
                {
                    continue;
                }
                else
                {
                    string temp1, temp2;
                    temp1 = alpha[i];
                    temp2 = alpha[j];
                    swap(temp1[0], temp2[0]);
                    {
                        if (st.find(temp1) != st.end() || st.find(temp2) != st.end())
                        {
                            continue;
                        }
                        else
                        {
                            count += 2;
                        }
                    }
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}