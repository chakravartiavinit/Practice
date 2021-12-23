#include <bits/stdc++.h>
using namespace std;
bool Pangram(string a)
{
    int arr[26] = {0};
    for (int i = 0; i < a.size(); ++i)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            arr[a[i] - 'A']++;
        }
        else
        {
            arr[a[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26; ++i)
    {
        if (arr[i] == 0)
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
    cout.tie(NULL);
    int n;
    cin >> n;
    string word;
    cin >> word;
    Pangram(word) == true ? cout << "YES\n" : cout << "NO\n";
    return 0;
}