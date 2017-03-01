#include<iostream>
using namespace std;

class FunctionOverloading{
private:
    int factor=1;
    void convert(int val, int base)
    {
        if(val==0) return;
        convert(val/base, base);
        if(val%base<=9)
        cout<<val%base;
        else
        {
        cout<<char((val%base)-10+'A');
        }
    }

public:
    FunctionOverloading()
    {
        factor=1;
    }
    FunctionOverloading(int x)
    {
        factor=x;
    }
    /*void print(int val=10, int base=10)
    {
        if(base==10)
        {
            cout<<"Decimal: "<<val<<endl;
        }
        else if(base==2)
        {
            cout<<"Binary: ";
            convert(val,2);
            cout<<endl;
        }
        else if(base==8)
        {
            cout<<"Octal: ";
            convert(val,8);
            cout<<endl;
        }
        else if(base==16)
        {
            cout<<"Hexadecimal: ";
            convert(val,16);
            cout<<endl;
        }

    }*/
    void print()
    {
        int val=10;
        cout<<"Decimal: "<<val*factor<<endl;
    }
    void print(int val)
    {
        cout<<"Decimal: "<<val*factor<<endl;
    }
    void print(int val, int base)
    {
        if(base==2)
        {
            cout<<"Binary: ";
            convert(val*factor,2);
            cout<<endl;
        }
        else if(base==8)
        {
            cout<<"Octal: ";
            convert(val*factor,8);
            cout<<endl;
        }
        else if(base==16)
        {
            cout<<"Hexadecimal: ";
            convert(val*factor,16);
            cout<<endl;
        }

    }
};

int main()
{
  FunctionOverloading obj;
  obj.print();
  obj.print(11);
  obj.print(11,2);
  obj.print(11,8);
  obj.print(11,16);
}


