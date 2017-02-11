#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

void takeInput(string &s);
int findAndCountVowel(string s, int &counter);

int main()
{
    string s;
    int counter=0;
    takeInput(s);

    int receiveCounter=findAndCountVowel(s,counter);
    cout<<receiveCounter;


    return 0;
}


void takeInput(string &s)
{
    cout<<"Enter string: ";
    getline(cin,s);
}



int findAndCountVowel(string s, int &counter)
{
    /*
    for(int i=0;i<s.size();i++)
    {
        if(       s[i]=='a'
               || s[i]=='e'
               || s[i]=='i'
               || s[i]=='o'
               || s[i]=='u'
               || s[i]=='A'
               || s[i]=='E'
               || s[i]=='I'
               || s[i]=='O'
               || s[i]=='U'
          ) counter++;
    }
    return counter;
    */

   char vowel[5]={'a','e','i','o','u'}; int v=5;

    for(int i=0;i<v;i++)
    {
        for(int j=0;j<s.size();j++)
        {
            if(s[j]==vowel[i])
               counter++;

        }
    }

    return counter;
}

