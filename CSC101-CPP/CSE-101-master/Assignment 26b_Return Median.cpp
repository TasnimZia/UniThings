#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;


void Array(int A[],int a);
void Display(int A[],int a);
void sorting(int A[], int a);
float median(int A[], int a);



int main()
{
    int A[5],a = 5;
    srand(time(NULL));

    Array(A,a);

    cout<<"Sample Array: ";
    Display(A,a);

    sorting(A,a);

    cout<<"Sorted Array: ";
    Display(A,a);

    float m= median(A,a);
    cout<<endl<<"Median: "<<m<<endl;

    return 0;
}


void Array(int A[],int a)
{
    int ll = 0, ul = 9;
    for(int i = 0;i < a;i++)
        A[i] = ll + rand() % (ul - ll + 1);
}



void Display(int A[],int a)
{
    for(int i = 0;i < a;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}



void sorting(int A[], int a)
{
    int mx,maxPosition;

    do
    {
        for(int i = 0;i < a;i++)
        {
            if(i == 0)
            {
                mx = A[i];
                maxPosition = i;
            }
            else if(A[i] > mx)
            {
                mx = A[i];
                maxPosition = i;
            }
        }

        int temp = A[maxPosition];
        A[maxPosition] = A[a - 1];
        A[a - 1] = temp;
        a--;

    }while(a > 0);
}


float median(int A[], int a)
{
    float med;

    if(a % 2 == 0)
    {
        med = (A[(a / 2) - 1] + A[(a / 2)]) / 2.0;
    }
    else
    {
        med = A[((a + 1) / 2) - 1];
    }

    return med;
}
