#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
class PointerArray{
int **p;
int row;
int col;
int page;

int ***p3D;




public:
  void memoryAllocate(int r, int c)
  {
    row=r;
    col=c;
    p=new int *[row];
    int i;
    for(i=0;i<row;i++)
    {
        p[i]=new int [col+1];
    }

  }
  void random_Populate()
  {
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
          p[i][j]=rand()%10;
        }
    }
  }
  void computeSumAndUpdateArray()
  {
    int i,j,sum;
    for(i=0;i<row;i++)
    {   sum=0;
        for(j=col-1;j>=0;j--)
        {
          sum+=p[i][j];
          p[i][j+1]=p[i][j];
        }
        p[i][0]=sum;
    }
    col++;
  }
  void display()
  {
    cout<<"2D pointer Values"<<endl;
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
          cout<<setw(3)<<p[i][j]<<" ";
        }
       cout<<endl;
    }
  }
  void memoryAllocate3D(int p, int r, int c)
  {
    page=p;
    row=r;
    col=c;
    p3D=new int **[page];
    int i,j;
    for(i=0;i<page;i++)
    {
        p3D[i]=new int *[row];
        for(j=0;j<row;j++)
        {
           p3D[i][j]=new int [col];
        }
     }
  }
  void random_Populate3D()
  {
    int i,j,p;
    for(p=0;p<page;p++)
    {
       for(i=0;i<row;i++)
       {
          for(j=0;j<col;j++)
          {
             p3D[p][i][j]=rand()%10;
          }
       }
     }
  }
  void display3D()
  {
    int i,j,p;
    for(p=0;p<page;p++)
    {  cout<<"\nPage No: "<<p<<endl;
       for(i=0;i<row;i++)
       {
          for(j=0;j<col;j++)
          {
             cout<<p3D[p][i][j]<<" ";
          }
        cout<<endl;
       }
     }
  }




};



int main()
{
int r=10;
int c=10;
PointerArray obj;
obj.memoryAllocate(r,c);
obj.random_Populate();
obj.computeSumAndUpdateArray();
obj.display();
/*obj.memoryAllocate3D(5,2,5);
obj.random_Populate3D();
obj.display3D();*/
}


