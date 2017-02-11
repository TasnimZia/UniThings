//
//  main.cpp
//  1621176_CSC101_1_Assignment21
//
//  Created by Ratul's Mac on 6/21/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


//Assignment 21
//Use Selection Sort to sort an array in ascending order.
//(Find the max and swap it with the end)
//Example: Array: 5 2 1 6 4
//Sorted Array: 1 2 4 5 6


//a) array
//b) 2 loops
//c) i == o
//    1) find min,
//    2) swap 2 1st,
//    3) find next min,
//    4) swap 2nd,


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    //DECLARATION
    int ArraySize; //n = 5;
    
    cout<<endl<<endl<<"Please Enter The Size Of Your Array : "<<endl;
    
    
    cin>> ArraySize;
    
    int Array[ArraySize];
    
    
    
    //POPULATE
    //srand(time(0));
    srand(time(NULL));
    //int ll = 0, ul = 5;
    
    int UpperLimit, LowerLimit;
    

    
    cout<<endl<<"Please Enter The Lower Limit : ";
    
    cin>> LowerLimit;

    
    cout<<endl<<"Please Enter The Upper Limit : ";
    
    cin>> UpperLimit;
    
    
    for (int iter = 0;iter < ArraySize; iter++)
    {
        //cout<<"Enter Number "<<i<<": ";
        //cin>>A[i];
        Array[iter] = LowerLimit + rand() % (UpperLimit - LowerLimit + 1);
    }
    
    //DISPLAY
    cout<<endl<<"Your Randomly Generated Array : ";
    
    for (int iter = 0;iter < ArraySize; iter++)
        cout<<Array[iter]<<" ";
    cout<<endl;
   
    
    
    
    
    //int Min = Array[0];
    
    int Temp;
    
   
    //int iter = 0;
    
    int Min;
    
    for (int iter = 0; iter < ArraySize; iter++)
    {
       // Min = Array[iter];
        
        
        //for Minimum
        for (int jiter = iter; jiter < ArraySize; jiter++)
            if (Array[jiter] < Array[iter])
            {
                Temp = Array[iter];
                Array[iter] = Array[jiter];
                Array[jiter] = Temp;
                
            }
    
    }
    
    cout<< endl<<"Your Sorted Array : ";
    
    for(int p = 0; p<ArraySize; p++)
    {
        cout<<Array[p]<<" ";
    }
    
    cout<<endl<<endl;
    
    return 0;
}


