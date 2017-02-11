#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void populate(int A[],int a);
void display(int A[],int a );
void bubbleSort(int A[], int a);
void swp(int A[], int loc1, int loc2);
void pushMax(int A[], int a);
void populateC(int A[],int B[],int C[],int a,int b,int c);

int main()
{

    int A[5],B[3],C[8];
    int a = 5, b = 3,c=8;



    srand(time(NULL));

    populate(A, a);
    cout<<"Sample Array A: ";
    display(A, a);

    populate(B, b);
    cout<<"Sample Array B: ";
    display(B, b);
    cout<<endl;

    bubbleSort(A, a);
    //bubbleSortStraightForward(A, n);
    cout<<"Sorted Array A: ";
    display(A, a);

    bubbleSort(B, b);
    cout<<"Sorted Array B: ";
    display(B, b);
    cout<<endl;

    populateC(A,B,C,a,b,c);
    cout<<"Merged array comparing A[] and B[]: "<<endl;
    display(C, c);
    cout<<endl;


return 0;
}

void populate(int A[],int a)
{
    int ll=0,ul=9;
    for(int i=0;i<a;i++)
        A[i]=ll+rand()%(ul-ll+1);
}

void display(int A[],int a )
{
    for(int i=0;i<a;i++)
        cout<<A[i]<<" ";
    cout<<endl;

}

void swp(int A[], int loc1, int loc2)
{
    int temp = A[loc1];
    A[loc1] = A[loc2];
    A[loc2] = temp;
}

void pushMax(int A[], int a)
{
    for (int i = 0;i < a - 1;i++)
    {
        if (A[i] > A[i + 1])
            swp(A, i, i + 1);
    }
}

void bubbleSort(int A[], int a)
{
    for (int i = 0;i < a - 1;i++)
        pushMax(A, a - i);
}

void populateC(int A[],int B[],int C[],int a,int b,int c)
{
    int locA=0,locB=0;
    for(int i=0;i<c;i++)
    {

        if(locA < a && locB < b)
        {
                if(A[locA] < B[locB])
                {
                   C[i]=A[locA];
                   locA++;


                }
                else if(B[locB] <= A[locA])
                {
                    C[i]=B[locB];
                    locB++;

                }

        }

        else if(locA == a)
        {
            C[i]=B[locB];
            locB++;
        }

        else if(locB == b)
        {
            C[i]=A[locA];
            locA++;
        }
    }
}

