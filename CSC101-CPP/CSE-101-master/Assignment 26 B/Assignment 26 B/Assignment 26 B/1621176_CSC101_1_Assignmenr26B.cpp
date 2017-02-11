//
//  main.cpp
//  Assignment 26 B
//
//  Created by Ratul's Mac on 7/20/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;


int Median(int Arr[], int sz);

void ArrayPopulation(int Arr[], int u, int l, int n);

void ArrayPrinter(int Arr[], int n);

void ArraySort(int Arr[], int n);

//float Median(int Arr[], float n);


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    //Assignment 26b :-
    //Submission Date: 25.07.2016
    // Create and Array of any size and sort it in a function.
    //Find and return the median in another function and return it.
    
    
    int ArraySize;
    
    cout<<"\nPlease Enter The Size Of Your Array: ";
    
    cin>> ArraySize;
    
    
    
    int Array[ArraySize];
    
    
    int UpperLimit, LowerLimit;
    
    cout<<"\nPlease Enter The Lower Limit For Your Array: ";
    
    cin>> LowerLimit;
    
    cout<<"\nPlease Enter The Upper Limit For Your Array: ";
    
    cin>> UpperLimit;
    
    
    
    ArrayPopulation(Array, UpperLimit, LowerLimit, ArraySize);
    
    
    cout<<"Raw Array : ";
    ArrayPrinter(Array, ArraySize);
    
    
    
    //    for (int jiter = 0; jiter < ArraySize; jiter++)
    //    {
    //        for (int iter = 0; iter < ArraySize; iter++)
    //        {
    //            if (Array[iter] > Array[iter+1])
    //                {
    //                    int temp = Array[iter];
    //                    Array[iter] = Array[iter+1];
    //                    Array[iter+1] = temp;
    //                }
    //        }
    //    }
    
    
    ArraySort(Array, ArraySize);
    
    
    cout<<"Array After Sort: ";
    
    ArrayPrinter(Array, ArraySize);
    
    
    //    if (ArraySize % 2 == 0)
    //    {
    //        float median;
    //        
    //        int m1 = ArraySize/2;
    //        
    //        int m2 = ArraySize/2 + 1;
    //        
    //        
    //        median = ((float (Array[m1]) + float (Array[m2]) / 2 ));
    //        
    //        cout<<median;
    //    }
    
    
    cout<<"The Median Of This Array Is : " << Median(Array, ArraySize) << endl <<endl;
    
    return 0;
}






void ArrayPopulation(int Arr[], int u, int l, int n)
{
    srand(time(0));
    int lA = l, uA = u;
    for (int i = 0;i < n;i++)
        Arr[i] = lA + rand() % (uA - lA + 1);
    
};



void ArrayPrinter(int Arr[], int n)
{
    cout<<"\nArray: ";
    for (int i = 0;i < n;i++)
        cout<<Arr[i]<<" ";
    cout<<endl<<endl;
};



void ArraySort(int Arr[], int n)
{
    for (int jiter = 0; jiter < n; jiter++)
    {
        for (int iter = 0; iter < n; iter++)
        {
            if (Arr[iter] > Arr[iter+1])
            {
                int temp = Arr[iter];
                Arr[iter] = Arr[iter+1];
                Arr[iter+1] = temp;
            }
        }
    }
};



//float Median(int Arr[], int n)
//{
//    int Case;
//    
//    if (n%2 == 0)
//        {
//            Case = 1;
//        }
//    
//    else
//    {
//        Case = 2;
//    }
//    
//    switch (Case) {
//        case 1:
//            <#statements#>
//            break;
//            
//        default:
//            break;
//    }
//    return 0;
//};



int Median(int Arr[], int sz)
{
    float median;
    
    
    int ArraySize = sz;
    
    int med_loc = ArraySize/2;
    
    if (ArraySize % 2 == 0)
    {
        median = float((float(Arr[(med_loc)-1]) + float (Arr[(med_loc)])))/float(2);
    }
    
    
    else
    {
        median = Arr[(med_loc)];
    }
    
    
    return median;
}