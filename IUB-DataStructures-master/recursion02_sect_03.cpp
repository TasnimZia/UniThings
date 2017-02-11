#include<iostream>
//#include<iomanip>
using namespace std;

class Pattern{
public:


    void display1toN(int n)
    {
        if(n==0) return;
        display1toN(n-1);
        //cout<<setw(2)<<n<<"  ";
        cout<<n<<" ";

    }
    void displayNto1(int n)
    {
        if(n==0) return;
        cout<<n<<" ";
        displayNto1(n-1);

    }
    void displaySameVal(int n,int m)
    {
        if(n==0) return;
        cout<<m<<" ";
        displaySameVal(n-1,m);
        //cout<<m<<" ";
    }


    void printSpace(int n)
    {
        if(n==0) return;
        cout<<"  ";
        printSpace(n-1);
    }
    void displayRightTriangleAscending(int n, int m)
    {
        if(n==0) return;
        displayRightTriangleAscending(n-1,m);
        printSpace(m-n);
        display1toN(n);
        //displayNto1(n);
        cout<<endl;
    }

    void displayBoundaryStar(int n, int m)
    {
        if(n==0) return;
        displayBoundaryStar(n-1,m);
        //cout<<setw(2)<<n<<"  ";
        if(n==1||n==m) cout<<"* ";
        else cout<<"  ";

    }

    void printStar(int n)
    {
        if(n==0) return;
        cout<<"* ";
        printStar(n-1);
    }

    void displayRightTriangleStar(int n, int m)
    {
        if(n==0) return;
        displayRightTriangleStar(n-1,m);
        printSpace(m-n);
        if(n==m)
            printStar(n);
        else
        displayBoundaryStar(n,n);
        //displayNto1(n);
        cout<<endl;
    }

    void displayDescendingUpper(int n, int m)
    {
        if(n==0) return;
        displayDescendingUpper(n-1,m);
        //cout<<setw(2)<<n<<"  ";
        cout<<m-n+1<<" ";

    }

    void displayRightTriangleDescendingUpper(int n, int m)
    {
        if(n==0) return;
        displayRightTriangleDescendingUpper(n-1,m);
        printSpace(m-n);
        displayDescendingUpper(n,m);
        //displayNto1(n);
        cout<<endl;
    }


    void displayPyramidStar(int n, int m)
    {
        if(n==0) return;
        displayPyramidStar(n-1,m);
        printSpace(m-n);
        if(n==1)
        {
            cout<<"* ";
        }
        else if(n==m)
        {
            printStar(2*n-1);
        }
        else{
        cout<<"* ";
        printSpace(2*(n-1)-1);
        //cout<<n<<" ";
        cout<<"* ";
        }
        cout<<endl;
    }


};

int main()
{
     int n;
     int m=1;
     Pattern obj;
     cout<<"How many values ?"<<endl;
     cin>>n;
     //obj.displayRightTriangleAscending(n,n);
     //obj.displayRightTriangleDescendingUpper(n,n);
     //obj.displayRightTriangleStar(n,n);
     obj.displayPyramidStar(n,n);
}
