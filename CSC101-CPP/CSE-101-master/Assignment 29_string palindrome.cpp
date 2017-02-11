#include<iostream>
#include<string>

using namespace std;

void takeInput(string &s);
string reverse_s(string s);
void palindrome(string s);

int main()
{
    string s;

    takeInput(s);

    palindrome(s);



    return 0;
}


void takeInput(string &s)
{
    cout<<"Enter string: ";
    cin>>s;
}


string reverse_s(string s)
{
    string c = "";


    for(int i = s.size()-1; i >= 0; i--)
    {
        c = c + s[i];
    }

   return c;
}


void palindrome(string s)
{
    string rev = reverse_s(s);

    if(s == rev)
        cout<<endl<<s<<" is a Palindrome."<<endl;
    else
        cout<<endl<<s<<" is Not a palindrome."<<endl;
}



