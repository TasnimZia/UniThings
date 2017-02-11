//
//  main.cpp
//  1621176_CSC101_1_Assignment22
//
//  Created by Ratul's Mac on 6/22/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n"<<endl;
    
    //DECLARATION
    cout<<"Please Enter The Size Of Your 1st Array : "<<endl;
    
    int n;
    
    cin>>n;
    
    int ArrayA[n];
    
    //POPULATE
    //srand(time(0));
    srand(time(NULL));
    int LowerLimit = 0, UpperLimit = n;
    for (int i = 0;i < n;i++)
    {
        //cout<<"Enter Number "<<i<<": ";
        //cin>>A[i];
        ArrayA[i] = LowerLimit + rand() % (UpperLimit - LowerLimit + 1);
    }
    
    //DISPLAY
    cout<<endl<<"Array A : ";
    for (int i = 0;i < n;i++)
        cout<<ArrayA[i]<<" ";
    cout<<endl<<endl;

    
    cout<<"Please Enter The Size Of Your 2nd Array : ";
    
    int m;
    
    cin>>m;
    
    int ArrayB[m];
    
    //POPULATE
    srand(time(NULL));
    //srand(time(NULL));
    UpperLimit = m;
    for (int i = 0;i < m;i++)
    {
        //cout<<"Enter Number "<<i<<": ";
        //cin>>A[i];
        ArrayB[i] = LowerLimit + rand() % (UpperLimit - LowerLimit + 1);
    }
    
    //DISPLAY
   // srand(time(NULL));
    //srand(time(NULL));
    cout<<endl<<"Array B : ";
    for (int i = 0;i < m;i++)
        cout<<ArrayB[i]<<" ";
    cout<<endl;
    
    
    int ArrayC[m];
    
    for (int i = 0; i<m; i++)
        ArrayC[i] = ArrayA[i] + ArrayB[i];
    
    
    cout<<endl<<endl<<"Array C : ";
    for (int i = 0;i < m;i++)
        cout<<ArrayC[i]<<" ";
    cout<<endl<<endl;
    
    
    
    return 0;
}



