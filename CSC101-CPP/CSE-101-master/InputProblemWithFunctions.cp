#include<iostream>
using namespace std;

//FUNCTION PROTOTYPING
void takeInput(int a);

int main()
{
    int a;
    takeInput(a);
    cout<<"Main: "<<a<<endl;

    return 0;
}

//FUNCTION DEFINITION
void takeInput(int a)
{
    cout<<"Enter Number: ";
    cin>>a;
    cout<<"Take Input: "<<a<<endl;
}


