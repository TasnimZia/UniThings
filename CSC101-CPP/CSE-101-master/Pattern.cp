#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int h;
    cout<<"Enter Height: ";
    cin>>h;

    cout<<endl;

    /*
    *
    **
    ***
    ****
    */
    for (int i = 1;i <= h;i++)
    {
        for (int j = 1;j <= i;j++)
            cout<<"*";

        cout<<endl;
    }

    cout<<endl;

    /*
    ****
    ***
    **
    *
    */
    for (int i = 1;i <= h;i++)
    {
        for (int j = h;j >= i;j--)
            cout<<"*";
        cout<<endl;
    }

    return 0;
}




