#include<iostream>
using namespace std;

int main()
{
    int m, n;
    cout<<"Enter Two Numbers: ";
    cin>>m>>n;

    //MAX and MIN
    int mx = m;
    int mn = n;
    if (mx < n)
    {
        mx = n;
        mn = m;
    }

    for (int j = mx;j >= mn;j--)
    {
        cout<<endl;

        //MULTIPLICATION TABLE
        for (int i = 1;i <= 10;i++)
            cout<<j<<" * "<<i<<" = "<<j * i<<endl;
    }

    return 0;
}

