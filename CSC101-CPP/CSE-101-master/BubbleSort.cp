#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void populate(int A[], int n);
void display(int A[], int n);
void swp(int A[], int n, int loc1, int loc2);
void pushMax(int A[], int n);
void bubbleSort(int A[], int n);
void bubbleSortStraightForward(int A[], int n);

int main()
{
    int A[5];
    int n = 5;

    populate(A, n);
    //cout<<"Main: "<<n<<endl;
    display(A, n);
    //pushMax(A, n);
    //display(A, n);
    //pushMax(A, n - 1);
    //display(A, n);
    bubbleSort(A, n);
    display(A, n);
    cout<<endl;
    //bubbleSortStraightForward(A, n);
    //display(A, n);

    return 0;
}

void populate(int A[], int n)
{
    srand(time(0));
    int ll = 0, ul = 9;
    for (int i = 0;i < n;i++)
        A[i] = ll + rand() % (ul - ll + 1);

    //n++;
    //cout<<"Populate: "<<n<<endl;
}

void display(int A[], int n)
{
    cout<<"Array: ";
    for (int i = 0;i < n;i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

void swp(int A[], int n, int loc1, int loc2)
{n - 1 - i
    int temp = A[loc1];
    A[loc1] = A[loc2];
    A[loc2] = temp;
}

void pushMax(int A[], int n)
{
    for (int i = 0;i < n - 1;i++)
    {
        if (A[i] > A[i + 1])
            swp(A, n, i, i + 1);
    }
}

void bubbleSort(int A[], int n)
{
    for (int i = 0;i < n - 1;i++)
        pushMax(A, n - i);
}

void bubbleSortStraightForward(int A[], int n)
{
    for (int i = 0;i < n - 1;i++)
    {
        for (int j = 0;j < n - 1 - i;j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
