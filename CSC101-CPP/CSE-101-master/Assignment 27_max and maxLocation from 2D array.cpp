#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void Array(int A[][4],int r,int c);
void Display(int A[][4],int r,int c);
int findMax(int A[][4],int r,int c,int &mxlocRow,int &mxlocCol);

int main()
{
    int A[3][4];
    int row=3, col=4;

    int mxlocRow,mxlocCol;

    srand(time(0));

    Array(A,row,col);
    Display(A,row,col);

    findMax(A,row,col,mxlocRow,mxlocCol);

    int maximum=findMax(A,row,col,mxlocRow,mxlocCol);

    cout<<endl<<"Maximum value "<<maximum<<" is found at "<<mxlocRow<<","<<mxlocCol<<endl;


    return 0;
}

void Array(int A[][4],int r, int c)
{
    int ll=0,ul=9;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            A[i][j]=ll+rand()%(ul-ll+1);
        }
    }
}

void Display(int A[][4],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

}

int findMax(int A[][4],int r,int c, int &mxlocRow, int &mxlocCol)
{
    int mx;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==0 && j==0)
                {
                    mx=A[i][j];
                    mxlocRow=i;
                    mxlocCol=j;

                }
            else if(A[i][j]>mx)
                {
                    mx=A[i][j];
                    mxlocRow=i;
                    mxlocCol=j;
                }

        }

    }
    return mx;

}

