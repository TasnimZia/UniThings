#include<iostream>
using namespace std;

float factorial(int x);

int main()
{
    int x;
    cout<<"Enter value for factorial: ";
    cin>>x;


    float fact = factorial(x);

    cout<<endl<<"Factorial of "<<x<<" : "<<fact;
    cout<<endl;

    return 0;
}

float factorial(int x)
{
    int memory = 1;
    for(int i = 1;i <= x;i++)
    {
        memory *= i;
    }
return memory;
}
