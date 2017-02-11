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
void rightAnglePyramid(int n)
{
    printUpperLines(n);
    printLowerLines(n-1);
}

void printSameValue(int n, int m)
{
    if(n==0) return;
    printSameValue(n-1,m);
    cout<<m<<" ";

}
void printSameValueUpperLines(int n)
{
    if(n==0) return;
    printSameValueUpperLines(n-1);
    printSameValue(n,n);
    cout<<endl;
    //cout<<n<<endl;
}
void printSameValueLowerLines(int n)
{
    if(n==0) return;
    printSameValue(n,n);
    cout<<endl;
    printSameValueLowerLines(n-1);

    //cout<<n<<endl;
}

void rightAngleSameValuePyramid(int n)
{
    printSameValueUpperLines(n);
    printSameValueLowerLines(n-1);
}


};

int main()
{
     int n;
     int m=1;
     Pattern obj;
     cout<<"How many values ?: ";
     cin>>n;

     //obj.rightAnglePyramid(n);
     obj.rightAngleSameValuePyramid(n);






}
