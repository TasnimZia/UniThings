//
//  main.cpp
//  Assignment 6
//
//  Created by Ratul's Mac on 5/19/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    float temperature;
    
    cout<<"Please Enter Your Current Room Temperature To Get Biri's Feedback.\n";
    
    cin>> temperature;
    
    if (temperature<0){
        cout<< "Freeze To Death. /n/n/n/n/n";
    }
    
    else if (temperature<5){
        cout<< "Extremely Cold. /n/n/n/n/n";
    }
    
    else if (temperature<10){
        cout<< "Very Cold. /n/n/n/n/n";
    }
    
    else if (temperature<15){
        cout<< "Cold. /n/n/n/n/n";
    }
    
    else if (temperature<20){
        cout<< "Mildly Cold. /n/n/n/n/n";
    }
    
    else if (temperature<25){
        cout<< "Normal. /n/n/n/n/n";
    }
    
    else if (temperature<30){
        cout<< "Mildly Hot.  /n/n/n/n/n";
    }
    
    else if (temperature<35){
        cout<< "Hot. /n/n/n/n/n";
    }
    
    else if (temperature<40){
        cout<< "Very Hot. /n/n/n/n/n";
    }
    
    else if (temperature<45){
        cout<< "Extremely Hot. /n/n/n/n/n";
    }
    
    else {
        cout<< "Dont Die. /n/n/n/n/n";
    }
    
    return 0;
}
