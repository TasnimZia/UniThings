#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{   int A[10];
    int n = 10;
    srand(time(NULL));
    int ll , ul;

    cout<<"Enter Lower Level: ";
    cin>>ll;
    cout<<"Enter upper Level: ";
    cin>>ul;

    cout<<endl;
    for (int i = 0;i < n;i++)
        A[i] = ll + rand() % (ul - ll + 1);

    cout<<"Array: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
    int sumeven = 0, sumodd = 0;
    for (int i = 0;i < ul;i++)
    {    if(A[i] % 2 == 0)
            sumeven += A[i];
         else
            sumodd += A[i];
    }
   cout<<"sum of the even number: "<< sumeven;
   cout<<endl;
   cout<<"sum of the odd number: "<< sumodd;
   cout<<endl;

 return 0;
}
