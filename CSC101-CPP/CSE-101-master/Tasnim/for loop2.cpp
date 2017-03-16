#include <iostream>

using namespace std;

int main()
{

    int odd, a, b;

    cout<<"Enter the value of a: ";

    cin>>a;

    cout<<"Enter the value of b: ";

    cin>>b;

    for(odd=a; odd<=b+1; odd=odd+2)
    {
        cout<<odd;

        if (odd<b)

            cout<<", ";

        else

            cout<<". ";
    }

    return 0;

}

