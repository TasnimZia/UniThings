#include<iostream>

using namespace std;

int main()
{
    int x,d,r,left;

    cout<<"Enter the number of chocolates: ";
    cin>> x;

    while(x>=3)
    {
      d = x/3;
      r = x%3;
      x = d+r;
    }

    cout<<endl;
    cout<<"You have "<<x<<" chocolates left. You cant get any more free chocolates :-p";
    cout<<endl<<endl;

    return 0;
}
