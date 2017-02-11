//
//  1621176_CSC101_1_Assignment7.cpp
//  1621176_CSC101_1_Assignment7
//
//  Created by Ratul's Mac on 5/29/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

//Assignment-7
//CSC101, Section-01
//Submission Date & Time- 30/05/16 (before 9.40am)
//Write a program that finds the 2nd maximum variable of the three inputs taken...
//**Use nested if**
//(e.g)
//Input: 3 4 5
//output: Second Max is 4.

#include "1621176_CSC101_1_Assignment7.hpp"

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
    
    if (a>b)
    {
        if (a<c)
        {
            cout<<a<<" is the 2nd Maximum number.";
            
        }
        
        else
        {
            cout<<c<<" is the 2nd Maximum number.";
        }
    }
    
    else
    {
        if (b<c)
        {
            cout<<b<<" is the 2nd Maximum number.";
        }
        
        else
        {
            cout<<c<<" is the 2nd Maximum number.";
        }
    }
    
    
    
    return 0;
}

