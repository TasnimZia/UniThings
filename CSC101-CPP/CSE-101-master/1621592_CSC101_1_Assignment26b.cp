#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void populate(int A[], int n);
void display(int A[], int n);
void findsort(int A[], int n);
void median(int A[], int n);
int main()
{
    int A[5];
    int n = 5;

    populate(A, n);
    cout<<"Array before sort: ";
    display(A, n);
    //findsort(A, n);
    median(A, n);

    return 0;
}
void populate(int A[], int n)
{
    srand(time(0));
    int ll = 0, ul = 9;
    for (int i = 0;i < n;i++)
        A[i] = ll + rand() % (ul - ll + 1);
}
void display(int A[], int n)
{
    
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
void findsort(int A[], int n)
{
    //display (A, n);
   for (int j = 0;j < n - 1;j++)
    {
        int mx = A[0], mxLoc = 0;
        for (int i = 1;i < n - j;i++)
        {
            if (mx < A[i])
            {
                mx = A[i];
                mxLoc = i;
            }
        }
        int temp = A[mxLoc];
        A[mxLoc] = A[n - 1 - j];
        A[n - 1 - j] = temp;
    }
    cout<<"Array After Sort: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}
void median(int A[], int n)
{
findsort (A, n);
 int p = n - 1;
 int med = p / 2;
 cout<<"The Median: "<<A[med];
}





