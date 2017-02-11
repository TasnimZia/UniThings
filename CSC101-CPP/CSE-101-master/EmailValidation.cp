#include<iostream>
#include<string>
using namespace std;

void takeInput(string &s);
bool validEmail(string s);

int main()
{
    string s;
    takeInput(s);

    if (validEmail(s))
        cout<<s<<" is Valid\n";
    else
        cout<<s<<" is Invalid\n";

    return 0;
}

void takeInput(string &s)
{
    cout<<"Enter String: ";
    cin>>s;
}

bool validEmail(string s)
{
    if (s[0] == '@')
        return false;

    if (s.find("@") == string::npos)
        return false;

    if (s.rfind(".") == string::npos)
        return false;

    if (s.find("@") > s.rfind("."))
    {
        cout<<"HERE\n";
        return false;
    }

    for (int i = 0;i < s.length();i++)
    {
        if (!((tolower(s[i]) >= 'a'
            && tolower(s[i]) <= 'z')
            || (s[i] >= '0' && s[i] <= '9')
            || s[i] == '@' || s[i] == '.'
            || s[i] == '_'))
            return false;
    }

    return true;
}












