#include <bits/stdc++.h>
using namespace std;

bool checkAB(string input)
{
    if (input.empty())
    {
        return true;
    }
    
    if (input.size() == 1)
    {
        if (input[0] == 'a')
        {
            return true;
        }
        else
            return false;
    }

    if (input[0] == 'a')
    {
        return checkAB(input.substr(1));
    }
    if (input[0] == 'b' && input[1] == 'a')
    {
        return false;
    }
    else if (input[0] == 'b' && input[1] == 'b' && (input[2] == 'a' || input[2] == '\0'))
    {
        return checkAB(input.substr(2));
    }
    else
        return false;
}
int main()
{
    string input;
    cin >> input;
    
    if (input[0] != 'a')
    {
        cout << "false";
    }
    else
    {
        cout << (checkAB(input.substr(1)) ? "true" : "false");
    }

    return 0;
}