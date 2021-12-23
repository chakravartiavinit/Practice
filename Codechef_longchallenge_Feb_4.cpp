#include<bits/stdc++.h>
#include<vector>
using namespace std;
int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);

    // If element was found
    if (it != v.end())
    {

        // calculating the index
        // of K
        int index = it - v.begin();
        return index;
    }

    // If the element is not
    // present in the vector
    return -1;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n,y;
        cin >> n;
        vector<int> a, b;
        vector<int> pos;
        vector<int> m;
        for (int i = 0; i < n; i++)
        {
            int l;
            cin >> l;
            a.push_back(l);
        }
        for (int i = 0; i < n; i++)
        {
            int l;
            cin >> l;
            b.push_back(l);
        }
        sort(m.begin(), b.end());

        for (int j = 1; j < n; j++)
        {
            int index = getIndex(a, m[j]);
            int x = m[getIndex(a, m[j - 1])];
             y = index;

            while (y <= x)
            {
                y = y + b[index];
                m[index] = y;
                y++;
            }
        }
        cout<<y<<"\n";
    }
}