#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int l = s.length();
    int arr[l] = {0};
    arr[0] = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            arr[i + 1]++;
        }
    }
    for (int i = 1; i < l; i++)
    {
        arr[i]=arr[i-1]+arr[i];
    }
    int n;
    cin>>n;
    while(n--)
    {
        int l,r;
        cin>>l>>r;
        cout<<arr[r-1]-arr[l-1]<<"\n";
    }
    return 0;
}