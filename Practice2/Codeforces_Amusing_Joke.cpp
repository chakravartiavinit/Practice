#include<iostream>
using namespace std;
bool check(string s1, string s2, string s3)
{
    int a[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        a[s1[i]-65]++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        a[s2[i]-65]++;
    }
    for (int i = 0; i < s3.length(); i++)
    {
        a[s3[i]-65]--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i]!=0)
        {
            return false;
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if (check(s1, s2, s3))
    {
        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }

    return 0;
}
