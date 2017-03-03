#include<iostream>
using namespace std;

class Pattern{
public:



    void displayStarDollarHash(int n)
    {
        if(n==-1) return;
        displayStarDollarHash(n-1);
        //cout<<n%3<<" ";
        if(n%3==0) cout<<"*";
        else if(n%3==1) cout<<"$";
        else cout<<"#";
    }


    void display1234512345(int n)
    {
        if(n==-1) return;
        display1234512345(n-1);
        cout<<n%5+1<<" ";
    }

    void display12471116(int n, int &m)
    {
        if(n==-1) return;
        display12471116(n-1,m);
        m=m+n;
        cout<<m<<" ";
    }

    void display1toN(int n)
    {
        if(n==0) return;
        display1toN(n-1);
        cout<<n<<" ";

    }
    void displaySameVal(int n,int m)
    {
        if(n==0) return;
        displaySameVal(n-1,m);
        cout<<m<<" ";
    }
    void display12345(int n, int m)
    {
        if(n==0) return;

        display12345(n-1,m);
        //display1toN(m);
        displaySameVal(n,m-n+1);
        cout<<endl;
        //displaySameVal(m,n);
        //cout<<n<<" ";
    }


    void displayNto1(int n)
    {
        if(n==0) return;
        cout<<n<<" ";
        displayNto1(n-1);

    }



};

int main()
{
     int n;
     int m=1;
     Pattern obj;
     cout<<"How many values ?"<<endl;
     cin>>n;
     /*obj.display1toN(n);
     cout<<endl;
     obj.displayNto1(n);
     cout<<endl;*/
     //obj.display1234512345(n-1);
     //obj.displayStarDollarHash(n-1);
     obj.display12345(n,n);
}
