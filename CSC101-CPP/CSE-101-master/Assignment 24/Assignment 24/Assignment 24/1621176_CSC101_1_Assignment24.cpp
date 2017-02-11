//
//  main.cpp
//  Assignment 24
//
//  Created by Ratul's Mac on 7/18/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>

using namespace std;

void pow(int b, int e);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    cout<<"\nPlease Enter The Base: ";
    
    float base;
    
    cin>> base;
    
    cout<<"\n\nPlease Enter The Power: ";
    
    int power;
    
    cin>> power;
    
    
    pow(base, power);
    
    
    return 0;
}



void pow(int b, int e)
{
    
    cout << endl;
    
    int prod = 1;
    
    for (int i = 0; i < e; i++)
    {
        prod = prod * b;
        
        cout<<b;
        
        if (i < e-1)
        {
            cout<<" * ";
        }
        
        else
            cout<< " = ";
    
    }
    cout<<prod<<endl<<endl;
};