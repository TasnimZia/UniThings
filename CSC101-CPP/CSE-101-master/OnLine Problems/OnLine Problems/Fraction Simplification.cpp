////
////  main.cpp
////  OnLine Problems
////
////  Created by Ratul's Mac on 6/24/16.
////  Copyright © 2016 Ratul's Mac. All rights reserved.
////
//
//#include <iostream>
//#include <cmath>
//
//
//using namespace std;
//
//
//
//
//int main(int argc, const char * argv[]) {
//    // insert code here...
//    std::cout << "Hello, World!\n\n";
//    
//    
////    Write a function which reduces fractions to their simplest form! Fractions will be presented as an array, and the reduced fraction must be returned as an array:
////    
////input: [numerator, denominator]   output: [newNumerator, newDenominator]
////Eg: [45, 120] --> [3, 8]
////    All numerators and denominators will be positive integers.
////    
////Note: This is an introductory Kata for a series... coming soon!
//    
//    
//    
//    
//    int numerator, denominator;
//    
//    cout<<"Please Enter The Numerator : "<<endl;
//    cin>>numerator;
//    
//    cout<<"Please Enter The Denominator : "<<endl;
//    cin>>denominator;
//    
//    
//    int Fraction[2];
//    
//    Fraction[0] = numerator;
//    
//    Fraction[1] = denominator;
//    
//    
//    cout<<"\nFraction Before Simplification : " <<endl;
//    
//    for (int i = 0; i <2; i++)
//    {
//        if (i==0)
//        {
//            cout<<"[ ";
//        }
//        
//        cout<<Fraction[i];
//        
//        if (i<1)
//        {
//            cout<<" , ";
//        }
//        
//        if (i==1)
//        {
//            cout<<" ] ";
//        }
//    }
//   
//    cout<<endl;
//    
//    int a, b;
//    
//    a = numerator;
//    
//    b = denominator;
//    
//   
//    bool Flag_Reversal = true;
//    
//    if (a>b)
//    {
//        int temp = a;
//        a = b;
//        b = temp;
//        
//        Flag_Reversal = false;
//    }
//    
//    
//    int limit;
//    
//    limit = (a);
//    
//    //cout<<"The sqrt of a is : " << limit;
//    
//    for (int iter = limit; iter>=1; iter--)
//    {
//        if( ( a%iter==0 ) && ( b%iter == 0) )
//        {
//            a = a/iter;
//            b = b/iter;
//        }
//    }
//    
//    
//if (Flag_Reversal)
//{
//    numerator = a;
//    denominator = b;
//}
//    
//else
//{
//    numerator = b;
//    denominator = a;
//}
//    
//    
//    
//    //cout<<"num "<<numerator<<"den "<<denominator;
//    
//    Fraction[0] = numerator;
//    
//    Fraction[1] = denominator;
//    
//    
//    cout<<"\nFraction After Simplification : " <<endl;
//    
//    for (int i = 0; i <2; i++)
//    {
//        if (i==0)
//        {
//            cout<<"[ ";
//        }
//        
//        cout<<Fraction[i];
//        
//        if (i<1)
//        {
//            cout<<" , ";
//        }
//        
//        if (i==1)
//        {
//            cout<<" ] ";
//        }
//    }
//    
//    cout<<endl;
//    cout<<endl;
//    
//    return 0;
//}
