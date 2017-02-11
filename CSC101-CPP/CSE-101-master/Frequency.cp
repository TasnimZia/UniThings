#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    //DECLARATION
    int A[10], C[3 + 1];
    int n = 10, s = 4;

    //POPULATE A
    srand(time(0));
    int lA = 0, uA = 3;
    for (int i = 0;i < n;i++)
        A[i] = lA + rand() % (uA - lA + 1);

    //DISPLAY A
    cout<<"Array A: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;

    //INITIALIZE C
    for (int i = 0;i < s;i++)
        C[i] = 0;

    //POPULATE C
    for (int i = 0;i < n;i++)
    {
        //int x = A[i];
        //C[x]++;
        C[A[i]]++;
    }

    //DISPLAY C
    cout<<"Array C: ";
    for (int i = 0;i < s;i++)
        cout<<C[i]<<" ";
    cout<<endl<<endl;

    //HISTOGRAM
    for (int i = 0;i < s;i++)
    {
        cout<<i<<": ";
        for (int j = 0;j < C[i];j++)
            cout<<"*";
        cout<<endl;
    }

    return 0;
}



