//
//  main.cpp
//  1621176_CSC101_1_Assignment9
//
//  Created by Ratul's Mac on 6/4/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    // insert code here...
    
    std::cout << "Hello, World!\n";
    
    int n;
    int a,b, Min, Min2;
    
    
    cout<< "Please Enter The Number Of Terms You Want To Input : " << endl;
    
    cin>> n;
    
    
    cout<< "Enter The First 2 Terms : " << endl;
    
    cin>> a;
    cin>> b;
    
    
    if (a<b)
        {
            Min = a;
            Min2 = b;
        }
    else
        {
            Min2 = a;
            //a = b;
            Min = b;
        }
   
    for (int i = n; i > 0 ; i = i -1)
    {
            cout<< "Enter The Next Term : "<< endl;
            
            cin>>a;
        
        
        if (a>b)
            {
                b = a;
            }
            
            if (a< Min)
                {
                    Min2 = Min;
                    Min = a;
                }
            
            else if (a < Min2)
                {
                    Min2 = a;
                }
    }
    
    cout<< "The 2nd Minimum Number Is : " << Min2 << ", And The Minimum Is : " << Min << "." << endl ;
    
    return 0;
}
