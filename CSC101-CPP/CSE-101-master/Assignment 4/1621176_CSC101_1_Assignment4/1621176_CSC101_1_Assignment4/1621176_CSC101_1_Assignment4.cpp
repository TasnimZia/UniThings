//
//  main.cpp
//  1621176_CSC101_1_Assignment4
//
//  Created by Ratul's Mac on 5/17/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include<iostream>
using namespace std;

int main()
{
    float n;
    
    cout<<"Wanna Check Out The Emotional Status Of Your Number?";
    
    cout<<endl<<endl<<"What are you waiting for? Please enter your number."<<endl<<endl;
    
    cin>>n;
    
    
    
    if (n > 0)
    {
        cout<<n<<" Is Positive! ^_^ "<<endl;
    }
    
    if (n < 0)
    {
        cout<<n<<" Is Negative.. T_T "<<endl;
    }
    
    if (n == 0)
    {
        cout<<n<<" Is Neutral (0). 0_0 "<<endl;
    }
    
    
    
    return 0;
}


















