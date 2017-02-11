//
//  main.cpp
//  Nested Loops
//
//  Created by Ratul's Mac on 6/6/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int c = 1;
    for (int i = 1;i <= 3;i++)//ROW
    {
        for (int j = 1;j <= 4;j++)//COLUMN
        {
            cout<<c<<" ";
            c++;
            //cout<<j<<" ";
            //cout<<i<<" ";
        }
        
        cout<<endl;
        
        
    
    
//    std::cout << "Hello, World!\n";
//    
//    
//    for (int j = 1; j <= 3; j++)
//   {
//        for (int i = 1; i <= 3; i++)
//            {
//                cout<<i<<" ";
//            }
//       cout<< endl;
   }
    return 0;
}
