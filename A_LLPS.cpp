#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int Maximum = INT_MIN;
    char alpha;
    string s;
    cin >> s;
    int arr[30] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
    }
    for (int i = 29; i >= 0; i--)
    {
        if (arr[i] > 0)
        {
            Maximum = arr[i];
            alpha ='a'+ i;
            for(int j=0;j<Maximum;j++)
            {
                cout<<alpha;
            }
            break;
        }
    }
    // cout<<Maximum;
    // for (int i = 0; i < Maximum; i++)
    // {
    //     cout<<alpha;
    // }

    return 0;
}
