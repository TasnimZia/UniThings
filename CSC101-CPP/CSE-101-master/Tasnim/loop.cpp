#include <iostream>

using namespace std;

int main ()
{
    for (int a = 0; a<=99; a=a+1)
{
        cout<<a;
        
        if (a<=98)
            
            cout<<", ";
        
        else
            
            cout<<". ";
}        
    return 0;
}
