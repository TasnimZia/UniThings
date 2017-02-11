#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    int p = 0, q = 0, r = 0, m = n;

    while (n % 2 == 0)
    {
        n /= 2;
        p++;
    }

    while (n % 3 == 0)
    {
        n /= 3;
        q++;
    }

    while (n % 5 == 0)
    {
        n /= 5;
        r++;
    }

    cout<<endl;

    if (n == 1)
        cout<<"2^"<<p<<" * "
            <<"3^"<<q<<" * "
            <<"5^"<<r<<" = "<<m<<endl;
    else
        cout<<m<<" is NOT an Ugly Number\n";

    return 0;
}





