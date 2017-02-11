#include<iostream>
#include<string>
#include<cstdlib>


using namespace std;

void takeInput(string &s);
int findOperator(string s, int &flag);
string firstHalfOfInput(string s,int &flag);
string secondHalfOfInput(string s,int &flag);
float stringToNumber(string s,int &flag);

int main()
{
    string s;
    int flag;
    string firstPart, secondPart;

    takeInput(s);
    findOperator(s,flag);
    stringToNumber(s,flag);



    return 0;
}


void takeInput(string &s)
{
    cout<<"Enter string: ";
    cin>>s;
}


int findOperator(string s, int &flag)
{
    int pos;
    if(s.find('+') != string :: npos)
    {
        pos = s.find('+');
        flag = 1;
    }

    else if(s.find('-') != string :: npos)
    {
        pos = s.find('-');
        flag = 2;
    }

    else if(s.find('*') != string :: npos)
    {
        pos = s.find('*');
        flag = 3;
    }

    else if(s.find('/') != string :: npos)
    {
        pos = s.find('/');
        flag = 4;
    }
    return pos;
}


string firstHalfOfInput(string s,int &flag)
{
    int first =  findOperator(s,flag);

    string firstPart = s.substr(0,first);
    return firstPart;
}

string secondHalfOfInput(string s,int &flag)
{
    int second =  findOperator(s,flag);

    string secondPart = s.substr(second+1);
    return secondPart;
}

float stringToNumber(string s,int &flag)
{

    string x=firstHalfOfInput(s,flag);
    string y=secondHalfOfInput(s,flag);


    int firstNum = atoi(x.c_str());


    int secondNum = atoi(y.c_str());

    cout<<endl;
    if(flag == 1)
    {
    int summation = firstNum + secondNum;
    cout<<firstNum<<" + "<<secondNum<<" = "<<summation;
    }


    else if(flag == 2)
    {
    int subtraction = firstNum - secondNum;
    cout<<firstNum<<" - "<<secondNum<<" = "<<subtraction;
    }


    else if(flag == 3)
    {
    int multiplication = firstNum * secondNum;
    cout<<firstNum<<" * "<<secondNum<<" = "<<multiplication;
    }

    else if(flag == 4)
    {
    float division = firstNum / (secondNum*1.0);
    cout<<firstNum<<" / "<<secondNum<<" = "<<division;
    }
    cout<<endl;
}

