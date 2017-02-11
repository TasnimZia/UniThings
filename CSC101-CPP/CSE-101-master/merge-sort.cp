#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int A[3]={0,2,4}, B[5]={1,3,5,7,9}, C[8];
    int i;

    cout<<"Array A: ";
    for(i=0; i<3; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\nArray B: ";
    for(i=0; i<5; i++)
    {
        cout<<B[i]<<" ";
    }
    int j=0, k=0;
    for(i=0; i<3*2; i++)
    {
        if(j > 3-1) break;

        else if(A[j] <= B[k])
        {
            C[i] = A[j];
            j++;
        }
        else
        {
            C[i] = B[k];
            k++;
        }
    }
    while(i != 8)
    {
        C[i] = B[k];
        i++;
        k++;
    }
    cout<<"\nArray C: ";
    for(i=0; i<8; i++)
    {
        cout<<C[i]<<" ";
    }
    cout<<endl;
}
