#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

void Array(int A[][4],int r,int l);
void Display(int A[][4],int r,int l);
int sum(int A[][4],int r,int l);


int main()
{
    srand(time(0));
    int A[4][4];
    int r=4,l=4;


   Array (A,r,l);
   Display (A,r,l);
   sum (A,r,l);

    return 0;
}



void Array(int A[][4],int r,int l)
{
    int ll=0, ul=9;
    for(int i=0; i<r;i++)
    {
        for(int j=0; j<l;j++)
        {
            A[i][j]= ll+ rand()% + (ul-ll+1);
        }
    }
}


void Display(int A[][4],int r,int l)
{
    int ll=0, ul=9;
    cout<<"Array:"<<endl;
    for(int i=0; i<r;i++)
    {
        for(int j=0; j<l;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}


int sum(int A[][4],int r,int l)
{
    int s;
    cout<<endl;
    for(int i=0; i<r;i++)
    {   s=0;
        for(int j=0; j<l;j++)
        {
            s=s+A[i][j];
        }

        cout<<"Summation of row "<<i+1<<" : "<<s<<endl;

    }

}

