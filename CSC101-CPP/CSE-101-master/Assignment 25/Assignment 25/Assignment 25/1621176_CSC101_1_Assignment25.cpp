//
//  main.cpp
//  Assignment 25
//
//  Created by Ratul's Mac on 7/19/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;


void ArrayPopulation(int Arr[], int u, int l, int n);

void ArrayPrinter(int Arr[], int n);

void MinFinder(int Arr[], int ArrSize);

void MaxFinder(int Arr[], int ArrSize);

void Summa(int Arr[], int n);

void Avva(int Arr[], float n);




int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    //Use a function to populate an array, display the array, find and print the minimum number of the array, find and print the maximum number of an array, find and print the sum of the array, and calculate and print the average of the array.
    
    
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
    
    ArrayPrinter(Array, ArraySize);

    MinFinder(Array, ArraySize);
   
    MaxFinder(Array, ArraySize);
    
    Summa(Array, ArraySize);
    
    Avva(Array, ArraySize);


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
cout<<"\nYour Array: ";
for (int i = 0;i < n;i++)
cout<<Arr[i]<<" ";
cout<<endl<<endl;
};



void MinFinder(int Arr[], int ArrSize)
{
    int Min;
    
    Min = Arr[0];
    
    for (int iter = 1; iter < ArrSize; iter++)
    {
        if (Min > Arr[iter])
        {
            Min = Arr[iter];
        }
    }
    
    
    cout<<"\nThe Minimum Number In Your Array Is: " << Min<<endl<<endl;
};



void MaxFinder(int Arr[], int ArrSize)
{
    int Max;
    
    Max = Arr[0];
    
    for (int iter = 1; iter < ArrSize; iter++)
    {
        if (Max < Arr[iter])
        {
            Max = Arr[iter];
        }
    }
    
    
    cout<<"\nThe Maximum Number In Your Array Is: " << Max<<endl<<endl;
};



void Summa(int Arr[], int ArrSize)
{
    int Sum = 0;
    
    for (int jiter = 0; jiter < ArrSize; jiter++)
    {
        Sum = Sum + Arr[jiter];
    }
    
    
    
    cout<<"\nThe Sum Of The Numbers In Your Array Is: " << Sum<<endl<<endl;
    

};



void Avva(int Arr[], float ArrSize)
{
    float Average;
    
    float Summ = 0;
    
    for (int jiter = 0; jiter < ArrSize; jiter++)
    {
        Summ = Summ + Arr[jiter];
    }
    
    Average = Summ/ArrSize;
    
    
    cout<<"\nThe Average Of The Numbers In Your Array Is: " << Average<<endl<<endl;
};