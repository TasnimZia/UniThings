#include<iostream>
//#include<iomanip>
using namespace std;

class Pattern{
public:

void printAscending(int n)
{
    if(n==0) return;
    printAscending(n-1);
    cout<<n<<" ";

}
void printDescending(int n)
{
    if(n==0) return;
    cout<<n<<" ";
    printDescending(n-1);
}

void printSpace(int n)
{
    if(n==0) return;
    printSpace(n-1);
    cout<<"  ";

}

void printUpperLines(int n)
{
    if(n==0) return;
    printUpperLines(n-1);
    printAscending(n);
    cout<<endl;
    //cout<<n<<endl;
}
void printLowerLines(int n)
{
    if(n==0) return;
    printAscending(n);
    cout<<endl;
    printLowerLines(n-1);

    //cout<<n<<endl;
}
void printSameValue(int n, int m)
{
    if(n==0) return;
    printSameValue(n-1,m);
    cout<<m<<" ";

}
void printRevPyramid(int n,int m)
{
    if(n==0) return;
    printRevPyramid(n-1,m);

    printSpace(n-1);
    printAscending(m-n+1);
    printDescending(m-n);
    cout<<endl;
}


};

int main()
{
     int n;
     int m=1;
     Pattern obj;
     cout<<"How many values ?: ";
     cin>>n;
     obj.printRevPyramid(n,n);






}
