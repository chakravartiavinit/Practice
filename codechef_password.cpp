#include <iostream>
#include <string>

using namespace std;

string lowerCaseCheck = "abcdefghijklmnopqrstuvwxyz";
string upperCaseCheck = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string numbersCheck = "1234567890";
string specialCharactersCheck = "@#%&?";
//Bool to check lower character
bool checkLower(string password, int s)
{
    bool contains = false;

    for (int i = 0; i < s; i++)
        if (lowerCaseCheck.find(password[i]) != string::npos)
        {
            contains = true;
            break;
        }
    return contains;
}

//-------------------------------
//Bool to check upper characters
bool checkUpper(string password, int s)
{
    int count = 0;
    for (int i = 0; i < s; i++)
        if (upperCaseCheck.find(password[i]) != string::npos)
            count++;

    if (count > 1)
        return true;
    else if (count == 1)
    {
        if (upperCaseCheck.find(password[0]) != string::npos || upperCaseCheck.find(password[s - 1]) != string::npos)
            return false;
        else
            return true;
    }

    else
        return false;
}

//-------------------------------------
//Bool to check number
bool checkNumber(string password, int s)
{
    int count = 0;
    for (int i = 0; i < s; i++)
        if (numbersCheck.find(password[i]) != string::npos)
            count++;

    if (count > 1)
        return true;
    else if (count == 1)
    {
        if (numbersCheck.find(password[0]) != string::npos || numbersCheck.find(password[s - 1]) != string::npos)
            return false;
        else
            return true;
    }

    else
        return false;
}

//-------------------------------------
//Bool to check special string characters
bool checkSpecial(string password, int s)
{
    int count = 0;
    for (int i = 0; i < s; i++)
        if (specialCharactersCheck.find(password[i]) != string::npos)
            count++;

    if (count > 1)
        return true;
    else if (count == 1)
    {
        if (specialCharactersCheck.find(password[0]) != string::npos || specialCharactersCheck.find(password[s - 1]) != string::npos)
            return false;
        else
            return true;
    }

    else
        return false;
}

//-------------------------------------

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string pass;
        cin >> pass;

        int s = pass.length();

        if (s >= 10 && checkLower(pass, s) && checkUpper(pass, s) && checkNumber(pass, s) && checkSpecial(pass, s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
