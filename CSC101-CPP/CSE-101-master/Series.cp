#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, x;
    cout<<"Enter Number of Terms and x: ";
    cin>>n>>x;

    cout<<endl;

    //x + 2x^3 + 3x^5 = SUM
    int p = 1, sum = 0;
    for (int i = 1;i <= n;i++)
    {
        cout<<i<<"*"<<x<<"^"<<p;

        int curTerm = i * pow(x, p);
        sum += curTerm;

        if (i < n)
            cout<<" + ";
        else
            cout<<" = ";

        p += 2;
    }

    cout<<sum;

    //x + 2x + 3x = SUM
    /*int sum = 0;
    for (int i = 1;i <= n;i++)
    {
        int curTerm = i * x;
        sum += curTerm;

        cout<<i<<"*"<<x;

        if (i < n)
            cout<<" + ";
        else
            cout<<" = ";
    }

    //int curTerm;
    //cout<<curTerm;
    cout<<sum;*/

    //1 + 2 + 3 + 4 = 10
    /*int sum = 0;
    for (int i = 1;i <= n;i++)
    {
        sum += i;

        if (i == n)
            cout<<i<<" = "<<sum;
        else
            cout<<i<<" + ";
    }*/

    cout<<endl;
    //cout<<sum<<endl;

    return 0;
}
