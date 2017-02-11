#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter The Number Of Terms You Want To See : ";
    cin>>n;
    
    int p = 0, q = 0, r = 0, m = n;
   
    for (int a = 1; a<=n; a++)
    {
    
            while (a % 2 == 0)
            {
                a /= 2;
                p++;
            }
            
            while (a % 3 == 0)
            {
                a /= 3;
                q++;
            }
            
            while (a % 5 == 0)
            {
                a /= 5;
                r++;
            }
            
            cout<<endl;
            
            if (a == 1)
                cout<<"2^"<<p<<" * "
                <<"3^"<<q<<" * "
                <<"5^"<<r<<" = "<<m<<endl;
            else
                cout<<m<<" is NOT an Ugly Number\n";
    }
    return 0;
}

