//
//  main.cpp
//  1621176_CSC101_1_Assignment23
//
//  Created by Ratul's Mac on 6/27/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int Rows = 5;
    
    int Columns = 7;
    
    int Array[Rows][Columns];
    
    cout<<"\nNow Lets Print The 5x7 Grid\n\n";
    
    
    srand(time(NULL));
    int ll = 1, ul = 35;
    
    for (int jiter = 0; jiter< Rows; jiter++)
    {
    for (int iter = 0;iter < Columns;iter++)
        Array[jiter][iter] = ll + rand() % (ul - ll + 1);
    }
    
    
//    for (int j = 0; j< Rows; j++)
//    {
//        //int counter = 0;
//        
//        for (int i = 0;i < Columns;i++)
//            //Array[i][j] = ll + rand() % (ul - ll + 1);
//        {
//            int counter = 1;
//            
//            cout<<Array[j][i]<< " , ";
//           // counter++;
//            if (counter%5 == 0)
//                cout<<endl;
//            counter++;
//        }
//    }
//    
    
    
    
    for (int jiter = 0; jiter <Rows; jiter++)
    {
        for (int iter = 1; iter <= Columns; iter++)
        {
            
            if (iter!=Columns)
            {
            cout<<Array[jiter][iter]<<", ";
             //   if (i%7 == 0)
                  //  cout<<endl;
            }
            
            else
            {
                cout<<Array[jiter][iter]<<" ";
                if (iter%7 == 0)
                    cout<<endl;

            }
        }
    }
    
    cout<<endl<<"Bravo!"<<endl<<endl;
    
    return 0;
}
