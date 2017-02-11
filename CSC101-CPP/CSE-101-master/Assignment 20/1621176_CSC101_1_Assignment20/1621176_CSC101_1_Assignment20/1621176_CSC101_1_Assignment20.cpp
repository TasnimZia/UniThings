//
//  main.cpp
//  1621176_CSC101_1_Assignment20
//
//  Created by Ratul's Mac on 6/20/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//
//Assignment 20-
//1) Create an array of size 100...
//2) Fill the array with random numbers...
//3) Find the maximum number within the random numbers...


#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n\n";
    
    cout<< "So Lets Get Started."<<endl<<"Declare Array, Initialize It, Seed And Feed It."<<endl;
    
    cout<<"Done. Now Display The Contents."<<endl<<"And Finally, Find The Max."<<endl<< endl;
    
    
    int ArraySize = 100;
    
    int Array[ArraySize];
    
    srand(time(NULL));
    
    int LowerLimit = 0, UpperLimit = 100;
    
    for (int iter = 0; iter < ArraySize; iter++)
    {
        //cout<<"Enter Number "<<i<<": ";
        //cin>>A[i];
        Array[iter] = LowerLimit + rand() % (UpperLimit - LowerLimit + 1);
    }
    
    
    cout<<"Array: ";
    for (int iter = 0;iter < ArraySize;iter++)
        cout<<Array[iter]<<" ";
    cout<<endl<<endl;
    
    //cout<<"Array: ";
    int Max = Array[0];
    
    
    for (int iter = 1;iter < ArraySize; iter++)
        if (Array[iter] > Max)
        {
            Max = Array[iter];
        }
    
    
        cout<< "Max : " <<  Max << endl<< endl;
  
    return 0;
}
