#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;
    int m;
    cin >> n >> m;
    int arr[m];
    unordered_set<int> st;
    for (int i = 0; i < m; ++i)
    {
        cin >> arr[i];
        st.insert(arr[i]);
    }
    sort(arr, arr + m);
    bool flag = true;
    for (int i = 0; i < m; ++i)
    {
        if (st.find(arr[i]) != st.end())
        {
            int count = 1, temp = arr[i];
            while (count < 4)
            {
                if (st.find(temp + 1) != st.end())
                {
                    count++;
                    temp++;
                }
                else
                {
                    break;
                }
            }
            if (count == 3)
            {
                flag = false;
            }
        }
    }
    if (arr[0] == 1 || arr[m - 1] == n)
    {
        flag = false;
    }
    flag == false ? cout << "NO\n" : cout << "YES\n";

    return 0;
}