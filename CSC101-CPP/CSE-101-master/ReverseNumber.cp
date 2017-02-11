#include<iostream>
using namespace std;

int main()
{
    int range;
    cout<<"Enter Range: ";
    cin>>range;
    cout<<endl;

    for (int x = 1;x <= range;x++)
    {
        int y = 0, n = x;
        while (n != 0)
        {
            int t = n % 10;
            y = (y * 10) + t;
            n /= 10;
        }

        cout<<"Reverse of "<<x
            <<" is "<<y<<endl;
    }

    return 0;
}

