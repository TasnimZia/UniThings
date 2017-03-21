#include <iostream>

using namespace std;

int main ()
{
    int number, number_of_terms;

    cout<<"Please enter your number: ";

    cin>>number;

    cout<<"Please enter the number of terms: ";

    cin>>number_of_terms;

    cout<<endl<<number<<" times table: "<<endl;

    cout<<endl;

    for (int iter = 1; iter <= number_of_terms; iter++)
    {
         cout<<number<<" * "<<iter<<" = "<<number*iter<<endl;
    }

    return 0;
}
