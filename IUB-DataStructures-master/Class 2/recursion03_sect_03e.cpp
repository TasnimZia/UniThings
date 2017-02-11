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


void printUpperHalfDiamond(int n, int m)
{
    if(n==0) return;
    printUpperHalfDiamond(n-1,m);

    printSpace(m-n);
    printAscending(n);
    printDescending(n-1);
    cout<<endl;
}

void printLowerHalfDiamond(int n, int m)
{
    if(n==0) return;
    printSpace(m-n+1);
    printAscending(n);
    printDescending(n-1);
    cout<<endl;

    printLowerHalfDiamond(n-1,m);
}


void printDiamond(int n)
{
    printUpperHalfDiamond(n,n);
    printLowerHalfDiamond(n-1,n-1);

}

};

int main()
{
     int n;
     int m=1;
     Pattern obj;
     cout<<"How many values ?: ";
     cin>>n;
     //obj.printNumberPyramid(n,n);
     //obj.printReveNumberPyramid(n,n);
     obj.printDiamond(n);






}
