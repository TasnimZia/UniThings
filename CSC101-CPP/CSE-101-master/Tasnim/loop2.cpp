#include <iostream>

using namespace std;

int main ()
{
    for(int a = 42; a>16; a = a-1)
    {
        cout<<a;
        
        if (a>17)
            
            cout<<", ";
        else
            
            cout<<".";
    }
  return 0;
}

