#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
using namespace std;

// KKKKKKKKK    KKKKKKK               AAA               LLLLLLLLLLL             IIIIIIIIII        66666666           66666666           66666666
// K:::::::K    K:::::K              A:::A              L:::::::::L             I::::::::I       6::::::6           6::::::6           6::::::6
// K:::::::K    K:::::K             A:::::A             L:::::::::L             I::::::::I      6::::::6           6::::::6           6::::::6
// K:::::::K   K::::::K            A:::::::A            LL:::::::LL             II::::::II     6::::::6           6::::::6           6::::::6
// KK::::::K  K:::::KKK           A:::::::::A             L:::::L                 I::::I      6::::::6           6::::::6           6::::::6
//   K:::::K K:::::K             A:::::A:::::A            L:::::L                 I::::I     6::::::6           6::::::6           6::::::6
//   K::::::K:::::K             A:::::A A:::::A           L:::::L                 I::::I    6::::::6           6::::::6           6::::::6
//   K:::::::::::K             A:::::A   A:::::A          L:::::L                 I::::I   6::::::::66666     6::::::::66666     6::::::::66666
//   K:::::::::::K            A:::::A     A:::::A         L:::::L                 I::::I  6::::::::::::::66  6::::::::::::::66  6::::::::::::::66
//   K::::::K:::::K          A:::::AAAAAAAAA:::::A        L:::::L                 I::::I  6::::::66666:::::6 6::::::66666:::::6 6::::::66666:::::6
//   K:::::K K:::::K        A:::::::::::::::::::::A       L:::::L                 I::::I  6:::::6     6:::::66:::::6     6:::::66:::::6     6:::::6
// KK::::::K  K:::::KKK    A:::::AAAAAAAAAAAAA:::::A      L:::::L         LLLLLL  I::::I  6:::::6     6:::::66:::::6     6:::::66:::::6     6:::::6
// K:::::::K   K::::::K   A:::::A             A:::::A   LL:::::::LLLLLLLLL:::::LII::::::II6::::::66666::::::66::::::66666::::::66::::::66666::::::6
// K:::::::K    K:::::K  A:::::A               A:::::A  L::::::::::::::::::::::LI::::::::I 66:::::::::::::66  66:::::::::::::66  66:::::::::::::66
// K:::::::K    K:::::K A:::::A                 A:::::A L::::::::::::::::::::::LI::::::::I   66:::::::::66      66:::::::::66      66:::::::::66
// KKKKKKKKK    KKKKKKKAAAAAAA                   AAAAAAALLLLLLLLLLLLLLLLLLLLLLLLIIIIIIIIII     666666666          666666666          666666666

#define MOD 1000000007
#define PI 3.141592653589793238462
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

/*########################################### DEBUG ###############################################################################################*/
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(long long t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(long double t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(unsigned long long t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.first);
    cerr << ",";
    _print(p.second);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}

/*###############################################################################################################################################*/
bool check_all_clear(vector<int> t)
{
    for (auto x : t)
    {
        if (x == -1)
        {
            return false;
        }
    }
    return true;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> vt(n);
        long long sum = 0;
        vector<int> check_element(n + 10, false);
        vector<int> new_vect(n, -1), check_1(n, -1);
        vector<int> odd_elements;
        vector<int> even_elements;
        for (int i = 0; i < n; ++i)
        {
            cin >> vt[i];
            sum += (vt[i] + (i + 1)) % 2;
            if ((vt[i] + i + 1) % 2 != 0)
            {
                new_vect[i] = vt[i];
                check_1[i] = vt[i];
                check_element[i] = true;
            }
            else
            {
                if (vt[i] % 2 == 0)
                {
                    even_elements.push_back(vt[i]);
                }
                else
                {
                    odd_elements.push_back(vt[i]);
                }
            }
        }
        long long answer = sum;
        int odd_counter = 0, even_counter = 0;
        for (int i = 0; i < n; ++i)
        {
            if (check_element[i] == false)
            {
                if ((i + 1) % 2 == 0)
                {
                    if (odd_counter < odd_elements.size() && odd_elements.size() > 0)
                    {
                        check_element[i] = true;
                        check_1[i] = odd_elements[odd_counter];
                        new_vect[i] = odd_elements[odd_counter];
                        odd_counter++;
                    }
                }
                else
                {
                    if (even_counter < even_elements.size() && even_elements.size() > 0)
                    {
                        check_1[i] = even_elements[even_counter];
                        check_element[i] = true;
                        new_vect[i] = even_elements[even_counter];
                        even_counter++;
                    }
                }
            }
        }
        if (check_all_clear(new_vect) == true)
        {
            long long sum_new = 0;
            for (int i = 0; i < n; ++i)
            {
                sum_new += (new_vect[i] + i + 1) % 2;
            }
            cout << max(sum, sum_new) << "\n";
        }
        else
        {
            // vector<int> check_1(n);
            // check_1 = new_vect;
            long long first_sum = 0, second_sum = 0;
            int new_odd_count = odd_counter, new_even_count = even_counter;
            for (int i = 0; i < n; ++i)
            {
                if (check_element[i] == false)
                {
                    if (new_even_count < even_elements.size() && even_elements.size() > 0)
                    {
                        // check_element[i]=true;
                        check_1[i] = even_elements[new_even_count];
                        new_even_count++;
                    }
                    else
                    {
                        // check_element[i]=true;
                        if (new_odd_count < odd_elements.size() && odd_elements.size() > 0)
                        {
                            check_1[i] = odd_elements[new_odd_count];
                            new_odd_count++;
                        }
                    }
                }
            }
            for (int i = 0; i < n; ++i)
            {
                if (check_element[i] == false)
                {
                    if (odd_counter < odd_elements.size() && odd_elements.size() > 0)
                    {
                        new_vect[i] = odd_elements[odd_counter];
                        odd_counter++;
                    }
                    else
                    {
                        if (even_counter < even_elements.size() && even_elements.size() > 0)
                        {
                            new_vect[i] = even_elements[even_counter];
                            even_counter++;
                        }
                    }
                }
            }
            for (int i = 0; i < n; ++i)
            {
                first_sum += (new_vect[i] + i + 1) % 2;
                second_sum += (check_1[i] + i + 1) % 2;
            }
            cout << max(answer, max(first_sum, second_sum)) << "\n";
        }
    }
}