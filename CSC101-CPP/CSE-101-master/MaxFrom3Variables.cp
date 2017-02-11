#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter Three Numbers: ";
    cin>>a>>b>>c;

    //cout<<a<<" "<<b<<" "<<c<<endl;

    //SOLUTION 1: Programmer Friendly
    /*if (a >= b && a >= c)
        cout<<"1. Max is "<<a<<endl;

    else if (b >= a && b >= c)
        cout<<"2. Max is "<<b<<endl;

    else
        cout<<"3. Max is "<<c<<endl;*/

    //SOLUTION 2: Computer Friendly
    /*if (a > b)
    {
        if (a > c)
            cout<<"1. Max is "<<a<<endl;
        else
            cout<<"2. Max is "<<c<<endl;
    }

    else
    {
        if (b > c)
            cout<<"3. Max is "<<b<<endl;
        else
            cout<<"4. Max is "<<c<<endl;
    }*/

    //SOLUTION 3:Programmer and Computer Friendly
    int mx = a;
    if (mx < b)
        mx = b;
    if (mx < c)
        mx = c;

    cout<<"Max is "<<mx<<endl;

    return 0;
}












