#include <bits/stdc++.h>
using namespace std;
bool checkBalanced(string &s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            st.push(s[i]);
        }
        else if(st.empty()==false)
        {
            st.pop();
        }
    }
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}