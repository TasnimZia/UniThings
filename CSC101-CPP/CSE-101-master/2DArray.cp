#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void populate(int A[][4], int rows, int cols);
void display(int A[][4], int rows, int cols);
int add(int A[][4], int r, int c);
void addAndAverage(int A[][4], int r, int c, int &sum, float &avg);

int main()
{
    //A[rows][cols]
    int A[3][4];//, B[3][4];
    int rows = 3, cols = 4;

    srand(time(0));
    populate(A, rows, cols);
    display(A, rows, cols);
    //cout<<endl;
    //populate(B, rows, cols);
    //display(B, rows, cols);
    //int sum = add(A, rows, cols);
    //cout<<"Sum: "<<sum<<endl;
    int sum;
    float avg;
    addAndAverage(A, rows, cols, sum, avg);
    cout<<"Sum: "<<sum<<endl;
    cout<<"Avg: "<<avg<<endl;

    return 0;
}

void populate(int A[][4], int r, int c)
{
    int ll = 0, ul = 1;
    for (int i = 0;i < r;i++)
    {
        for (int j = 0;j < c;j++)
            A[i][j] = ll + rand() % (ul - ll + 1);
    }
}

void display(int A[][4], int r, int c)
{
    for (int i = 0;i < r;i++)
    {
        for (int j = 0;j < c;j++)
            cout<<A[i][j]<<" ";

        cout<<endl;
    }
}

int add(int A[][4], int r, int c)
{
    int res = 0;

    for (int i = 0;i < r;i++)
    {
        for (int j = 0;j < c;j++)
            res += A[i][j];
    }

    return res;
}

void addAndAverage(int A[][4], int r, int c, int &sum, float &avg)
{
    sum = add(A, r, c);

    avg = (float)sum / (r * c);
}







