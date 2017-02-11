#include<iostream>
using namespace std;

int main()
{
    int x, sum = 0;

    do
    {
        cout<<"Enter Number: ";
        cin>>x;

        sum += x;
    } while (x != -777);

    sum -= -777;

    cout<<sum<<endl;

    return 0;
}

