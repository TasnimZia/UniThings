//
//  main.cpp
//  1621176_CSC101_1_Assignment8
//
//  Created by Ratul's Mac on 5/28/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    std::cout << "Hello, World!\n\n";
    
    float a, b;
    
    cout<<"Please Enter a & b :\n\n";
    cin>>a;
    cin>>b;
    
    if (a == 7)
    {
      if (b == 7)
      {
          cout<<"Success!!! \n\n";
      }
        
      else if (b > 7)
      {
          cout<< "More Success!!! \n\n";
      }
        
      else
      {
          cout<< "Failure... \n\n";
      }
    }
    else
    {
        cout<< "Failure... \n\n";
    }
     return 0;
    }
    


