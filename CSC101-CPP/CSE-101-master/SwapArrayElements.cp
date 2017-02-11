#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    //DECLARATION
    int A[5];
    int n = 5;

    //POPULATE
    srand(time(NULL));
    int ll = 0, ul = 9;
    for (int i = 0;i < n;i++)
        A[i] = ll + rand() % (ul - ll + 1);

    //DISPLAY
    cout<<"Array: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;

    //TAKE INPUT
    int loc1, loc2;
    cout<<"Enter Two Locations: ";
    cin>>loc1>>loc2;

    //SWAP
    int temp = A[loc1];
    A[loc1] = A[loc2];
    A[loc2] = temp;

    //A[loc1] = A[loc1] + A[loc2];
    //A[loc2] = A[loc1] - A[loc2];
    //A[loc1] = A[loc1] - A[loc2];

    //DISPLAY
    cout<<"Array: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;

    return 0;
}
