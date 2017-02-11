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

void printDiamondLeftUpper(int n,int m)
{
    if(n==0) return;
    printDiamondLeftUpper(n-1,m);
    printSpace(m-n);
    printDescending(n);
    cout<<endl;
}
void printDiamondLeftLower(int n,int m)
{
    if(n==0) return;
    printDiamondLeftLower(n-1,m);
    printSpace(n);
    printDescending(m-n);
    cout<<endl;
}

void printLeftHalfDiamond(int n)
{
    printDiamondLeftUpper(n,n);
    printDiamondLeftLower(n,n);
}



};

int main()
{
     int n;
     int m=1;
     Pattern obj;
     cout<<"How many values ?: ";
     cin>>n;
     obj.printLeftHalfDiamond(n);







}
