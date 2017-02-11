#include<iostream>
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
    /*for (int i = 1;i <= h;i++)
    {
        //SPACES
        for (int j = 1;j <= h - i;j++)
            cout<<" ";

        //STARS
        for (int j = 1;j <= i;j++)
            cout<<"*";

        cout<<endl;
    }*/

    /*
    ****
     ***
      **
       *
    */
    /*for (int i = 1;i <= h;i++)
    {
        //SPACES
        for (int j = 1;j < i;j++)
            cout<<" ";

        //STARS
        for (int j = h;j >= i;j--)
            cout<<"*";

        cout<<endl;
    }*/

    /*
       *
      ***
     *****
    *******
    */
    int stars = 1;
    for (int i = 1;i <= h;i++)
    {
        //SPACES
        for (int j = i;j < h;j++)
            cout<<" ";

        //STARS
        for (int j = 1;j <= stars;j++)
            cout<<"*";

        cout<<endl;

        stars += 2;
    }

    return 0;
}
