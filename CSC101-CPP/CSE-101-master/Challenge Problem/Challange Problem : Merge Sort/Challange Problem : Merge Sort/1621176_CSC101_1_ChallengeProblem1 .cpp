//
//  main.cpp
//  Challange Problem : Merge Sort
//
//  Created by Ratul's Mac on 7/19/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;


void ArrayPopulation(int Arr[], int u, int l, int n);

void ArrayPrinter(int Arr[], int n, int k);


void Merge(int Array1Size, int Array2Size, int Array1[], int Array2[], int ArrayComb[]);


void ArraySort(int Arr[], int n);



int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int ArraySize;
    
    cout<<"\nPlease Enter The Size Of Your First Array: ";
    
    cin>> ArraySize;
    
    
    int Size1 = ArraySize;
    
    
    int Array1[ArraySize];
    
    
    int UpperLimit, LowerLimit;
    
    cout<<"\nPlease Enter The Lower Limit For Your First Array: ";
    
    cin>> LowerLimit;
    
    cout<<"\nPlease Enter The Upper Limit For Your First Array: ";
    
    cin>> UpperLimit;
    
    
    
    ArrayPopulation(Array1, UpperLimit, LowerLimit, ArraySize);
    
    cout<<"\nBefore Sorting: "<<endl;
    
    ArrayPrinter(Array1, ArraySize, 1);
    
    
    
    ArraySort(Array1, Size1);
    
    cout<<"\nAfter Sorting: "<<endl;
    
    
    ArrayPrinter(Array1, ArraySize, 1);
    
    
    
    //int ArraySize;
    
    
    
    cout<<"\nPlease Enter The Size Of Your Second Array: ";
    
    cin>> ArraySize;
    
    int Size2 = ArraySize;
    
    int Array2[ArraySize];
    
    
    
    //int UpperLimit, LowerLimit;
    
    cout<<"\nPlease Enter The Lower Limit For Your Second Array: ";
    
    cin>> LowerLimit;
    
    cout<<"\nPlease Enter The Upper Limit For Your Second Array: ";
    
    cin>> UpperLimit;
    
    
    
    ArrayPopulation(Array2, UpperLimit, LowerLimit, ArraySize);
    
    cout<<"\nBefore Sorting: "<<endl;
    
    
    ArrayPrinter(Array2, ArraySize, 2);
    
    cout<<"\nAfter Sorting: "<<endl;
    
    
    ArraySort(Array2, Size2);
    
    ArrayPrinter(Array2, ArraySize, 2);
    
    
    
    cout<<"\nAfter Merging: "<<endl;
    
    
    int ArrayComb[Size1+Size2];
    
    Merge(Size1, Size2, Array1, Array2, ArrayComb);
    
    //Merge(Size1, Size2, Array1, Array2, ArrayComb);
    
    ArrayPrinter(ArrayComb, Size1+Size2, 3);
    
    
    
    
    return 0;
}


void ArrayPopulation(int Arr[], int u, int l, int n)
{
    srand(time(0));
    int lA = l, uA = u;
    for (int i = 0;i < n;i++)
        Arr[i] = lA + rand() % (uA - lA + 1);
    
};



void ArrayPrinter(int Arr[], int n, int k)
{
    cout<<"\nArray Number "<<k<<": ";
    for (int i = 0;i < n;i++)
        cout<<Arr[i]<<" ";
    cout<<endl<<endl;
};




void Merge(int Array1Size, int Array2Size, int Array1[], int Array2[], int ArrayComb[]) {
    int iter, jiter, kiter;
    iter = 0;
    jiter = 0;
    kiter = 0;
    while (iter < Array1Size && jiter < Array2Size) {
        if (Array1[iter] <= Array2[jiter]) {
            ArrayComb[kiter] = Array1[iter];
            iter++;
        }
        else {
            ArrayComb[kiter] = Array2[jiter];
            jiter++;
        }
        kiter++;
    }
    
    if (iter < Array1Size) {
        for (int piter = iter; piter < Array1Size; piter++) {
            ArrayComb[kiter] = Array1[piter];
            kiter++;
        }
    }
    
    else {
        for (int piter = jiter; piter < Array2Size; piter++) {
            ArrayComb[kiter] = Array2[piter];
            kiter++;
        }
    }
}




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