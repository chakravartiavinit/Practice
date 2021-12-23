#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    Complex() : real(0), img(0)
    {
    }
    Complex(int x1, int y1) : real(x1), img(y1)
    {
    }
    void Print()
    {
        cout << real << "+" << img << "i";
    }
};
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Complex alpha, alpha1(10,5);
    alpha.Print();
    alpha1.Print();

    return 0;
}