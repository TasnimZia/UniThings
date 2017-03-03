#include<iostream>
using namespace std;

class RecursiveAlgorithm{


public:
    int factorial(int n)
    {
        if(n<=1) return 1;
        return n*factorial(n-1);

    }
    int xPowN(int x, int n)
    {
        if(n==1) return x;
        return x*xPowN(x,n-1);
    }

    void sum(int x, int n, double &s)
    {
        if(n==0) { s+=1;
                   cout<<"1+";
                   return;
         }
        sum(x,n-1,s);
        cout<<xPowN(x,n)<<"/"<<factorial(n)<<"+";
        s=(double)xPowN(x,n)/factorial(n)+s;
    }

    int sum_of_first_n_digits(int num)
    {
        if (num == 1)return 1;
        return num + sum_of_first_n_digits(num - 1);

    }
    void FindAllFactorialsUptoN(int num)
    {
        if (num == 0)return;
        FindAllFactorialsUptoN(num-1);
        cout<<"fact of "<<num<<" Is "<<factorial(num);
        cout<<endl;
    }

    void findAllFactorials(int n, int &fact)
    {
        if(n<=0) return;
        findAllFactorials(n-1,fact);
        fact=fact*n;
        cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    }




};





int main()
{
    int n,x,fact=1;
    int c=0;
    double s=0;
    RecursiveAlgorithm obj;

    cout<<"Enter n? :"<<endl;
    cin>>n;
    cout<<"Enter x? :"<<endl;
    cin>>x;


    //cout<<obj.xPowN(2,2);


    obj.sum(x,n,s);
    cout<<"\b="<<s;

    //cout<<"factorial of "<<n<<" is: "<<obj.factorial(n);

    //cout<<"The sum of the first " << n << " numbers is : " << obj.sum_of_first_n_digits(n);

     //obj.findAllFactorials(n,fact);





    return 0;
}
