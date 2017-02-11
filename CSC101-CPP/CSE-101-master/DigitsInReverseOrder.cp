#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    int noDigits = 0, m = n;
    while (n != 0)
    {
        cout<<n % 10<<" ";
        n /= 10;

        noDigits++;
    }

    cout<<endl<<m<<" has "
        <<noDigits<<" digits\n";

    return 0;
}
