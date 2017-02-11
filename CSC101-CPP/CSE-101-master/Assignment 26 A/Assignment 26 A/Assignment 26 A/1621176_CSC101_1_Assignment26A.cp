//
//  main.cpp
//  Assignment 26 A
//
//  Created by Ratul's Mac on 7/20/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>


using namespace std;



//\\Take an input in the main, and compute the factorial inside a function and return the function. (Output the result in the main)
//Example:
//5! = 5*4*3*2*1 = 120

int factorial (int num);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n\n";
    
    
    cout<<"Please Enter The Number Whose Factorial You Want To Find: ";
    
    int num;
    
    cin>>num;
    
    
    // factorial (num);
    
    
    cout<<"\nThe Factorial Of " << num << " Is " << factorial(num)<<"."<<endl<<endl;
    
    
    
    
    return 0;
}


int factorial(int num)
{
    int fact = 1;
    int temp = num;
    
    while (temp != 1)
    {
        fact = fact * temp;
        temp = temp - 1;
        
    }
    return fact;
    
}

//    12. Write a program that will take an integer and compute its factorial.
//
//
//    1) int num; fact = 1;
//    2) fact = num * fact;
//    3) num = num -1
//


//    int num; int fact = 1;
//
//    cout<<"Please Enter Your Number To Be Factorialized : " <<endl;
//    cin>>num;
//
//    int temp = num;
//
//    while (temp != 1)
//    {
//        fact = fact * temp;
//        temp = temp - 1;
//
//    }
//
//    cout<<"The Factorial Of " << num << " Is " << fact<<"."<<endl<<endl;
