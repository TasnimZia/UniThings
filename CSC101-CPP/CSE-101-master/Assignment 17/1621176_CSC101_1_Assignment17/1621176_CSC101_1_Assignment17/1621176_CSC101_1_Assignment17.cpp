//
//  main.cpp
//  1621176_CSC101_1_Assignment17
//
//  Created by Ratul's Mac on 6/11/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int range, term, test_num = 0, counter = 0;
    
    cout<<"Please Enter The Range From 1 Upto Which I Will Brute Search For Palindromes : /n"<<endl;
    
    cin>> range;
    
    
    for (int checker = 1; checker<= range; checker++ )
    
       int term = checker;
    
        for (int divisor =1; divisor < term; divisor++)
            {
                if ( ( term % divisor ) == 0)
                    {
                        test_num = divisor + test_num;
                    }
            
        }
   
                if ( test_num == term )
                {
                    //cout<< term << " Is Palindrome.";
                    counter++;
                }
    
    cout<<"There Are "<<counter<<" Palindrome Numbers In Your Given Range. /n"<<endl;

    
   // cout<< term;
    
    return 0;
}
