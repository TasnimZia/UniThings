#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void populate(int A[],int a);
void display(int A[],int a );
void maximum(int A[] ,int a);
void minimum(int A[],int a);
void average(int A[],int a);
void sum(int A[],int a);


int main()
{
    int A[4];
    int a = 4;

    srand(time(NULL));

    populate(A, a);
    display(A, a);

    sum(A, a);
    maximum(A,a);
    minimum(A,a);
    average(A,a);

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
    cout<<"Sample Array: ";
    for(int i=0;i<a;i++)
        cout<<A[i]<<" ";
    cout<<endl<<endl;
}

void sum(int A[],int a)
{
    int sum=0;
    for(int i=0; i<a;i++)
       sum += A[i];
    cout<<"Sum    : "<<sum<<endl;
}

void maximum(int A[] ,int a)
{
    int mx;
    for(int i=0; i<a;i++)
    {
        if(i == 0)
            mx = A[i];
        else if(A[i] > mx)
            mx = A[i];
    }
    cout<<"Maximum: "<<mx<<endl;
}

void minimum(int A[],int a)
{
    int mn;
    for(int i=0; i<a;i++)
    {
        if(i == 0)
            mn = A[i];
        else if(A[i] < mn)
            mn = A[i];
    }
    cout<<"Minimum: "<<mn<<endl;
}

void average(int A[],int a)
{
    int sum =0;
    for(int i=0;i<a;i++)
    {
        sum+=A[i];
    }
    float avg = (sum*1.0)/a;
    cout << "Average: " << avg << endl;
}

