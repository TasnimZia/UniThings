//
//  main.cpp
//  Assignment 27
//
//  Created by Mac on 7/27/16.
//  Copyright © 2016 Mac. All rights reserved.
//

#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;


//int ArrayCreator(




//void ArrayPopulation(int Arr[][int column], int n);


//void ArrayPrinter(int Arr[][4])

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n\n";
    
    //Objectives:
    //    1) Use functions to Create a 2D Array..
    //    2) Populate the array with random numbers..
    //    3) Display the max number in the array and its position..
    //    (p.s) Use only one function...
    //Example:
    //    For the picture attached the program should display,
    //Max: 5 position 2,3
    
    
    
    //fuction to create array
    
    //ArrayCreator;
    int ArrayRow, ArrayColumn;
    
    cout<<"Please Enter The Number Of Rows Of Your Array: ";
    
    cin>> ArrayRow;
    
    cout<<"Please Enter The Number Of Columns Of Your Array: ";
    
    cin>> ArrayColumn;
    
    int Array[ArrayRow][ArrayColumn];
    
    
    
    //    ArrayPopulation(Array[][ArrayColumn], ArrayColumn*ArrayColumn);
    int n = ArrayColumn * ArrayRow;
    
    int l;
    
    cout<<"Please Enter The Lower Limit: ";
    
    cin>>l;
    
    int u;
    
    cout<<"Please Enter The Upper Limit: ";
    
    cin>>u;
    
    
    srand(time(0));
    int lA = l, uA = u;
    
    for (int jiter = 0; jiter < ArrayRow; jiter++)
    {
        for (int i = 0;i < ArrayColumn;i++)
            Array[jiter][i] = lA + rand() % (uA - lA + 1);
    }
    
    
    
    for (int iter = 0; iter < ArrayRow; iter++)
    {
        for (int jiter = 0; jiter < ArrayColumn; jiter++)
        {
            cout<< Array[iter][jiter];
            
            if (jiter<(ArrayColumn - 1))
            {
                cout<<", ";
            }
            
            else
                cout<<endl;
        }
    }
    
    
    
    int i, j, Max = 0;
    
    for (int jiter = 0; jiter < ArrayRow; jiter++)
    {
        for (int iter = 0; iter < ArrayColumn; iter++)
        {
            if (Array[jiter][iter] > Max)
            {
                Max = Array[jiter][iter];
                
                i = jiter;
                j = iter;
            }
            
        }
    }
    
    
    cout<<"The Maximum Value Is "<<Max<<" And It Occurs For The First Time In The " << i+1 <<" Number Row, And "<<j+1<<" Number Column.\n\n";
    
    
    return 0;
}



//void ArrayPopulation(int Arr[][], int n)
//{

//    int l;
//    
//    cout<<"Please Enter The Lower Limit: ";
//    
//    int u;
//    
//    cout<<"Please Enter The Upper Limit: ";
//    
//    srand(time(0));
//    int lA = l, uA = u;
//    for (int i = 0;i < n;i++)
//        Arr[i] = lA + rand() % (uA - lA + 1);

//};

//void ArrayPopulation(int Array[][const int ArrayColumn], int ArrayRow, int ArrayColumn)
//{
//    
//    
//}

