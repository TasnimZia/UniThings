//
//  main.cpp
//  Assignment 31
//
//  Created by Mac on 7/28/16.
//  Copyright © 2016 Mac. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    string text;
    
    cout<< "Please Enter Your Text : "<<endl;
    
    getline(cin, text);
    
    //int length = text.length();
    
    //cout<<endl<<"The length " <<length<<endl;
    
    
    //    int size = text.size();
    //
    //    cout<<endl<<"The size " <<size<<endl;
    
    
    
    int length = text.length();
    //
    //
    //
    int vowel_counter;
    //
    //    int digit_counter;
    //
    //    int space_counter;
    //
    //
    //
    for (int iter = 0; iter < length; iter++)
    {
        if (( text[iter] == 'a')
            or
            ( text[iter] == 'e')
            or
            ( text[iter] == 'i')
            or
            ( text[iter] == 'o')
            or
            ( text[iter] == 'u')
            or
            ( text[iter] == 'A')
            or
            ( text[iter] == 'E')
            or
            ( text[iter] == 'I')
            or
            ( text[iter] == 'O')
            or
            ( text[iter] == 'U') )
        {
            
            vowel_counter++;
            
        }
        //
        //
        //
        //        else if ( isspace(text[iter]) )
        //        {
        //            space_counter++;
        //
        //        }
        //
        //
        //
        //
        //        else if ( isdigit(text[iter]) )
        //        {
        //            digit_counter++;
        //
        //        }
        //
        //    }
        //
        //
        //
        //
        //
        //
        //
        //    cout<<endl<<"There Are " << length<<" Characters In Your Text. "<<endl;
        //
    }
    cout<<endl<<"There Are " << vowel_counter<<" Vowels In Your Text. \n"<<endl;
    //
    //    cout<<endl<<"There Are " << digit_counter<<" Digits In Your Text. "<<endl;
    //
    //    cout<<endl<<"There Are " << space_counter+1 <<" Words In Your Text. "<<endl<<endl;
    //
    
    
    
    return 0;
}
