#include<iostream>
using namespace std;

//FUNCTION PROTOTYPE
void power(int a, int b);

int main()
{
    int a, b;
    cout<<"Enter Base: ";
    cin>>a;
    cout<<"Enter Power: ";
    cin>>b;
    cout<<endl;


    //FUNCTION CALL
    power(a, b);


    return 0;
}

//FUNCTION DEFINITION
void power(int a, int b)
{
    int r = 1;

    for(int i = 1; i <= b; i++)
        r = r * a;
    cout<<a<<" ^ "<<b<<" = "<<r<<endl;
}






