//
//  main.cpp
//  1621176_CSC101_1_Assignment7
//
//  Created by Ratul's Mac on 5/28/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    float a, b, c;
    cout<< "Please give your 3 numbers : ";
    cin>> a;
    cin>> b;
    cin>> c;
  
    
    if (c>a)
        {
        if (c<b)
            {
            cout<<c<<" is the 2nd Maximum number.";
            }
        }
    else
        {
            if (c>b)
                {
                cout<<c<<" is the 2nd Maximum number.";
                }
        }
    
    if (a>b)
        {
            if (a<c)
            {
                cout<<a<<" is the 2nd Maximum number.";
            }
            else if (b>c)
            {
                cout<<b<<" is the 2nd Maximum number.";
            }
        }
    
    
    
    
    else
        {
            if (b<c)
            {
                cout<<b<<" is the 2nd Maximum number.";
            }
    
            else if (a>c)
            {
                cout<<a<<" is the 2nd Maximum number.";
            }
        }
    
    
    
//    if (a>b)
//    {
//        if (a<c)
//        {
//            cout<<a<<" is the 2nd Maximum number.";
//            
//        }
//        else if (b>c)
//        {
//            cout<<b<<" is the 2nd Maxiumum number.";
//        };
//    else
//        {
//        if (b<c)
//        {
//            cout<<b<<" is the 2nd Maximum number.";
//        };
//        };
//
    
    
    
    
//        else
//        {
//            cout<<c<<" is the 2nd Maximum number.";
//        }
//    }
//    
//    else
//    {
//        if (b<c)
//        {
//            cout<<b<<" is the 2nd Maximum number.";
//        }
//        
//        else
//        {
//            cout<<c<<" is the 2nd Maximum number.";
//        }
//    }
        
    
    
    return 0;
}

//}