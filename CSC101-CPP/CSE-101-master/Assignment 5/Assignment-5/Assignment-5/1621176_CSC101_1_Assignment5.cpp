//
//  main.cpp
//  Assignment-5
//
//  Created by Ratul's Mac on 5/19/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>
using namespace std;


int main() {
    
    std::cout << "Please Enter Your Score: \n";
    float score;
    
    
    
    cin>> score;

    
    
    if (score < 40)
        cout<< "Your Grade is F. \n\n\n\n\n";

    
    else if (score < 45)
        cout<< "Your Grade is D. \n\n\n\n\n";

    
    else if (score < 50)
        cout << "Your Grade is D+. \n\n\n\n\n";

    
    else if (score<55)
        cout << "Your Grade is C-. \n\n\n\n\n";

    
    else if (score<60)
        cout<< "Your Grade is C.  \n\n\n\n\n";

    
    else if (score<65)
        cout<< "Your Grade is C+. \n\n\n\n\n";

    
    else if (score <70)
        cout<< "Your Grade is B-. \n\n\n\n\n";

    
    else if (score<75)
        cout<<"Your Grade is B. \n\n\n\n\n";

    
    else if (score<80)
        cout<<"Your Grade is B+. \n\n\n\n\n";

    
    else if (score<85)
        cout<<"Your Grade is A-. \n\n\n\n\n";

    
    else
        cout<<"Your Grade is A. \n\n\n\n\n";

    
    
    return 0;
}
