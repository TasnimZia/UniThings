//
//  main.cpp
//  1621176_CSC101_1_Assignment10
//
//  Created by Ratul's Mac on 5/30/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>

using namespace std;


int main() {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    cout<< "Please Enter The Number Up To Which You Will Find Multiples. \n";
    
    int m, a, b;
    
    cin>> m;
    
    cout<< "Now Enter Your 2 Factors. \n";
    
    cin>> a >> b;
    
    cout<< "The Multiple Of " << a << " and " << b<< " are: " <<  endl;

    for (int iter = 1; iter <= m; ++iter)
        {
            if (((iter % a) == 0) && ((iter % b) == 0))
            {
                cout<< iter<< ", ";
            }
            }
    cout<< endl;

    
    return 0;
}
