#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{


    int A[100];
    int t; int r;
    cout<<"Enter the upper limit: ";
    cin>>t;
    cout<<"Enter the lower limit: ";
    cin>>r;


    srand(time(NULL));
    int ll = t, ul = r;
    for (int i = 0;i < 100;i++)
    {
       A[i] = ll + rand() % (ul - ll + 1);
    }

    cout<<"Array: ";
    for (int i = 0;i < 100;i++)
        cout<<A[i]<<" ";
    cout<<endl;







    return 0;
}
