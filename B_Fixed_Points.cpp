#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    bool alpha[n] = {true};
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        if (arr[i] = i)
        {
            count++;
            alpha[i] = false;
        }
    }
    int count1 = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (arr[i] != i && arr[j] != j && alpha[i] == true && alpha[j] == true)
            {
                swap(arr[i], arr[j]);
                if (arr[i] == i && arr[j] == j)
                {
                    count1++;
                    alpha[i]=false;
                    alpha[j]=false;
                }
            }
        }
    }
    cout << count + count1 << '\n';
    return 0;
}