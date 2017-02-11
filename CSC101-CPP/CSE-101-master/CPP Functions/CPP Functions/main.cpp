//
//  main.cpp
//  CPP Functions
//
//  Created by Ratul's Mac on 6/21/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>

using namespace std;

//void test();
//
//void test()
//{
//    cout<<"tasti"<<endl;
//}
//
//
//void multi(int a, int b);

//void multi(int a, int b)
//{
//    a, b;
//    cout<<a*b;
//}
//
//
//void kajer(int a, string b)
//{
//    cout<< a*2 << b;
//}



//void pyramid();
//
//void pyramid()
//{
//    int space, rows, k=0;
//    cout<<"Enter the number of rows: ";
//    cin>>rows;
//    
//    cout<<endl<<"Please Enter Your Design : "<<endl;
//    
//    string s;
//    
//    cin>>s;
//    
//    cout<<endl;
//    
//    for(int iter=1;iter<=rows;++iter)
//    {
//        for(space=1;space<=rows-iter;++space)
//        {
//            cout<<"  ";
//        }
//        while(k!=2*iter-1)
//        {
//            cout<<s<<" ";
//            ++k;
//        }
//        k=0;
//        cout<<"\n";
//    }
//    cout<<endl;
//}


void Factorial();

void Factorial()
{
    int n;
    int factorial,i;
    
    cout << "Enter a positive integer to be factorialized : "<<endl;
    cin >> n;
    
    for (i = 0; i <= n; i++)
        
        if (i == 0)
            factorial = 1;
        else
            factorial = factorial * i;
    
    cout << endl<<"The factorial of " << n << " is " << factorial << endl<< endl;
 
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n"<<endl;
    
//    test();
//    
//    multi(6, 2);
//    
//    kajer(3, "s");
    

    
    
//        int space,rows,k=0;
//        cout<<"Enter the number of rows: ";
//        cin>>rows;
//    
//    
//        for(int iter=1;iter<=rows;++iter)
//        {
//            for(space=1;space<=rows-iter;++space)
//            {
//                cout<<"  ";
//            }
//            while(k!=2*iter-1)
//            {
//                cout<<"* ";
//                ++k;
//            }
//            k=0;
//            cout<<"\n";
//        }
    
    
//    pyramid();
    
//    Factorial();
    
    return 0;
}
