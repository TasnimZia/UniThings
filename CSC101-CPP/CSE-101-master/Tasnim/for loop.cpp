#include <iostream>

using namespace std;

int main()
{

    int iter, a, b;

    cout<<"Enter the value of a: ";

    cin>>a;

    cout<<"Enter the value of b: ";

    cin>>b;

    for(iter=a; iter<=b; iter++)
    {
        cout<<iter;

        if (iter<=b)

            cout<<", ";

        else

            cout<<". ";
    }

    return 0;
}
