#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
class FlexiblePointerArray{
int **p;
int row;
int *col;

public:
    FlexiblePointerArray(int r=5)
    {
        int i;
        row=r;
        p=new int *[row];
        col=new int [row];
        for(i=0;i<row;i++)
        {
            cout<<"How many cols in row: "<<i<<endl;
            cin>>col[i];
            p[i]=new int [col[i]+1];
        }

    }
    void randomPopulate()
    {
        int i,j;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col[i];j++)
            {
                p[i][j]=rand()%100;
            }
        }

    }
    void displayArray()
    {
        int i,j;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col[i];j++)
            {
                cout<<setw(2)<<p[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    void process()
    {
        int i,j,sum;
        for(i=0;i<row;i++)
        {
            sum=0;
            for(j=0;j<col[i];j++)
            {
                sum+=p[i][j];
            }
            p[i][j]=sum;
            col[i]++;
        }

    }





};



int main()
{

FlexiblePointerArray obj(4);
obj.randomPopulate();
cout<<"Original Array"<<endl;
obj.displayArray();
obj.process();
//cout<<"\nProcessed Array"<<endl;
//obj.displayArray();

}


