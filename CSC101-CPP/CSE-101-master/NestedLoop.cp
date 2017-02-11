#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int c = 1;
    for (int i = 1;i <= 3;i++)//ROW
    {
        for (int j = 1;j <= 4;j++)//COLUMN
        {
            cout<<c<<" ";
            c++;
            //cout<<j<<" ";
            //cout<<i<<" ";
        }

        cout<<endl;
    }

    return 0;
}



