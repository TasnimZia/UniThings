#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    //DECLARATION
    int n = 5;
    int A[5];

    //POPULATE
    //srand(time(0));
    srand(time(NULL));
    int ll = 0, ul = 5;
    for (int i = 0;i < n;i++)
    {
        //cout<<"Enter Number "<<i<<": ";
        //cin>>A[i];
        A[i] = ll + rand() % (ul - ll + 1);
    }

    //DISPLAY
    cout<<"Array: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;

    //SUM
    int sum = 0;
    for (int i = 0;i < n;i++)
        sum += A[i];

    cout<<"Sum: "<<sum<<endl;

    //CUMULATIVE FREQUENCY
    for (int i = 1;i < n;i++)
        A[i] = A[i] + A[i - 1];

    //DISPLAY
    cout<<"Cumulative Freq Array: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;


    return 0;
}













