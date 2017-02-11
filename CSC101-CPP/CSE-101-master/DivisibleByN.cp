#include<iostream>
using namespace std;

int main()
{
    /*int i = 0;

    while (i <= 4)
    {
        cout<<i<<endl;
        i++;
    }*/

    int a, b;
    cout<<"Enter a and b: ";
    cin>>a>>b;

    int counter = 0, c = a;
    while (a != 1)
    {
        a /= b;
        counter++;
    }

    cout<<c<<" is divisible "
        <<"by "<<b<<" "
        <<counter<<" times"<<endl;

    return 0;
}
