#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string alpha;
    cin >> alpha;
    string beta;
    for (int i = 0; i < alpha.length(); ++i)
    {
        if (alpha[i] == 'R')
        {
            reverse(beta.begin(), beta.end());
        }
        else
        {
            beta.push_back(alpha[i]);
        }
    }
    stack<char> st;
    string ans;
    for (int i = 0; i < beta.length(); ++i)
    {
        if (st.empty() == true)
        {
            st.push(beta[i]);
            ans.push_back(beta[i]);
        }
        else if (st.empty() == false && st.top() == beta[i])
        {
            st.pop();
            ans.pop_back();
        }
        else
        {
            st.push(beta[i]);
            ans.push_back(beta[i]);
        }
    }
    cout << ans << "\n";
    return 0;
}