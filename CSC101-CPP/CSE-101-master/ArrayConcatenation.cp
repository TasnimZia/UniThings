#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    //DECLARATION
    int A[3], B[5], C[8];
    int n = 3, m = 5, s = 8;

    //POPULATE A
    srand(time(0));
    int lA = 0, uA = 9;
    for (int i = 0;i < n;i++)
        A[i] = lA + rand() % (uA - lA + 1);

    //POPULATE B
    //srand(time(0));
    int lB = 0, uB = 9;
    for (int i = 0;i < m;i++)
        B[i] = lB + rand() % (uB - lB + 1);

    //DISPLAY A
    cout<<"Array A: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;

    //DISPLAY B
    cout<<"Array B: ";
    for (int i = 0;i < m;i++)
        cout<<B[i]<<" ";
    cout<<endl;

    //POPULATE C
    //Copy A
    for (int i = 0;i < n;i++)
        C[i] = A[i];

    //Copy B
    int j = 0;
    for (int i = n;i < s;i++)
    {
        C[i] = B[j];
        j++;
    }

    //DISPLAY C
    cout<<"Array C: ";
    for (int i = 0;i < s;i++)
        cout<<C[i]<<" ";
    cout<<endl;

    return 0;
}













