#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ;
    string s1, s2, s3="";
    cin >> s1 >> s2;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == '0' && s2[i] == '0'||s1[i]=='1'&&s2[i]=='1')
        {
            s3.push_back('0');
        }
        else
        {
            s3.push_back('1');
        }
        
    }
    for(int j=0;j<s3.length();j++)
    {
        cout<<s3[j];
    }
    return 0;
}
