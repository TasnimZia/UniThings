//
//  main.cpp
//  1621176_CSC101_1_Assignment3
//
//  Created by Ratul's Mac on 5/16/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    //DECLARATION and INITIALIZATION
    //int n = 2;
    
    //DECLARATION
    float n;//, m;
    float m;
    
    
    
    
    
    cout<<"Please Enter Your 1st Number: ";
    cin>>n;
    
    cout<<"/n Please Enter Your 2nd Number: ";
    cin>>m;
    
    //cout<<"Enter Number: ";
    //cin>>m;
    
    //cout<<n<<endl;
    cout<<endl<<"Lets Multiply Your Numbers!";
    cout<<endl<<n<<" * " << m << " = " <<n * m<<endl;
    
    cout<<endl<<"Now Lets Divide Them!";
    cout<<endl<<n<<" / " << m << " = " << int(n / m)<<endl;
    
    float p = n/m;
cout<<endl<<"A Bit More Of Division...";
    cout<<endl<<n<<" / " << m << " = " << p <<endl;
    
    cout<<endl<<"Finally, The Good Old Additive.";
    cout<<endl<<n<<" + " << m << " = " <<n + m<<endl;
    
    cout<<endl<<"And Last But Not Least, Subtraction.";
    cout<<endl<<n<<" - " << m << " = " <<n - m<<endl;
    
    
//    cout<<n<<" * 2 = "<<n * 2<<endl;
//    cout<<n<<" * 3 = "<<n * 3<<endl;
//    cout<<n<<" * 4 = "<<n * 4<<endl;
//    cout<<n<<" * 5 = "<<n * 5<<endl;
    
    return 0;
}