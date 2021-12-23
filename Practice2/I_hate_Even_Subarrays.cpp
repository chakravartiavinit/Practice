#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        st.push(s[0]);
        for (int i = 1; i < s.length(); i++)
        {
            if (!st.empty() && st.top() == s[i])
            {
                st.pop();
            }
            else
                st.push(s[i]);
        }
        if (st.size() == 0)
            cout << "KHALI\n";
        else
        {
            string str = "";
            while (!st.empty())
            {
                str += st.top();
                st.pop();
            }
            reverse(str.begin(), str.end());
            cout << str << endl;
        }
    }
}