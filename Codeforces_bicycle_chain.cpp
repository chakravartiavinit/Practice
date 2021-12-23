#include <bits/stdc++.h> 
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m,maximum;
    vector<int> v1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[j] % a[i] == 0)
            {
                v1.push_back(b[j]/a[i]);
            }
        }
    }
    sort(v1.begin(), v1.end());
    maximum=*max_element(v1.begin(),v1.end());
    cout << count(v1.begin(),v1.end(),maximum) << "\n";
    return 0;
}
