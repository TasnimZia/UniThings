//
//  main.cpp
//  Javed Sir's Problems
//
//  Created by Ratul's Mac on 6/2/16.
//  Copyright © 2016 Ratul's Mac. All rights reserved.
//

#include <iostream>
#include <string>

/*
 #include <math.h>
 #include <cmath>
 */

#include <cmath>

#include<cstdlib>
#include<ctime>



using namespace std;


int ArrayDigitAdder (int ArrA[], int A)
{
    int Sum = 0;
    
    
    
    for (int iter = 0; iter < A; iter++)
    {
        
        int kiter = ArrA[iter];
        
        
        while (kiter != 0)
        {
            int last_temp = kiter % 10;
            Sum = Sum + last_temp;
            kiter = kiter / 10;
        }
        
    }
    
    return Sum;
}


//void Pyramid();
//
//void Pyramid()
//{
//    
//}



//void UpperCasers(string text)
//{
//    for (int iter = 0; iter < text.size(); iter++)
//    {
//        if (text[iter] >= 'A' && text[iter] <= 'Z')
//        {
//            int jiter {iter};
//            while (text[jiter] != ' ' && jiter < text.size())
//            {
//                cout<<text[jiter];
//                
//                jiter++;
//            }
//            cout<<' '<<endl;
//        }
//    }
//}




//void ArrayReverser(int Array[], int ArraySize)
//{
//    for (int iter = 0; iter < ArraySize/2; iter++)
//    {
//        int temp {Array[iter]};
//        Array[iter] = Array[ArraySize - 1  - iter];
//        Array[ArraySize - 1  - iter] = temp;
//        
//    }
//}
//
//
//bool Divisible_Five_Seven (int Num)
//{
//    bool Check{false};
//    
//    if  ((Num % 5 == 7 ) || ( Num % 7 == 0))
//        return Check = true;
//    
//    return Check;
//}

//void bubbleSortStraightForward(int A[][6], int n);



//void AbsDifference(int ArrA[], int ArrB[], int ArrC[], int Size)
//{
//    {
//        for (int iter = 0; iter < Size; iter++)
//        {
//            ArrC[iter] = abs(ArrA[iter] - ArrB[iter]);
//            
//            //cout<<"A: "<<ArrA[iter] <<"-"<<ArrB[iter]<<"=";
//            cout<<ArrC[iter] << " ";
//        }
//        
//    }
//    
//    cout<<endl;
//    cout<<endl;
//}

int main(/*int argc, const char * argv[]*/) {
    // insert code here...
    
    
    //    string word1 = "Game";
    //    string word2("Over");
    //    string word3(3, '!');
    //    string phrase = word1 + " " + word2 + word3; cout << "The phrase is: " << phrase << "\n\n";
    //    cout << "The phrase has " << phrase.size() << " characters in it.\n\n"; cout << "The character at position 0 is: " << phrase[0] << "\n\n";
    //    cout << "Changing the character at position 0.\n"; phrase[0] = 'L';
    //    cout << "The phrase is now: " << phrase << "\n\n";
    //    for (unsigned int i = 0; i < phrase.size(); ++i) {
    //        cout << "Character at position " << i << " is: " << phrase[i] << endl; }
    //    cout << "\nThe sequence ’Over’ begins at location "; cout << phrase.find("Over") << endl;
    //    if (phrase.find("eggplant") == string::npos) {
    //        cout << "’eggplant’ is not in the phrase.\n\n"; }
    //    phrase.erase(4, 5);
    //    cout << "The phrase is now: " << phrase << endl;
    //    phrase.erase(4);
    //    cout << "The phrase is now: " << phrase << endl;
    //    phrase.erase();
    //    cout << "The phrase is now: " << phrase << endl;
    //    if (phrase.empty()) {
    //        cout << "\nThe phrase is no more.\n"; }//
    
    //    std::cout << "Hello, World!\n";
    //    cout << "This message is False. \n\n";
    
    
    
    
    //   cout<< "When earth is sundered, \nand skies choked black,\nAnd sleepers serve the seven curses,\nTo the hearth there comes a stranger,\nJourneyed far 'neath moon and star.\n\n";
    
    
    
    
    //    cout<<"##   ## #########   \n\t##      ####   ##      \n\t######### ######### \n\t#### #### #######";
    
    
    
    
    //    int i;
    //    float f;
    //    char c;
    //    
    //    cout<< "Please enter an integer:\n";
    //    cin>> i;
    //    
    //    cout<<"\nPlease enter a float:";
    //    cin>> f;
    //    
    //    cout<<endl<<"\nPlease enter a character:";
    //    cin>> c;
    //    
    //    cout<<"\nYour character: "<<c<<", your float: "<<f<<", and your integer: "<<i<<".";
    //
    
    
    
    //Write a program that displays the sum, difference, product, quotient (division), and remainder of two integers provided by the user
    
    //Write a program that calculates the number of seconds, minutes and hoursin 1year.
    
    
    //    cout<<"Please enter the number of years: "<<endl;
    //    
    //    int y;
    //    cin>>y;
    //    
    //    int days;
    //    days = 365* y;
    //    
    //    int month;
    //    month = 12 * y;
    //    
    //    int hour;
    //    hour = days* 24;
    //    
    //    int min;
    //    min = hour * 60;
    //    
    //    int sec;
    //    sec = min*60;
    //    
    //    
    //    cout<< "There are "<< sec << " seconds, "<< min << " minutes, " << hour << " hours, " << days << " days, and " << month << " monthes, in " << y << " years." << endl;
    //
    //    
    //
    
    
    
    
    
    //    float result, a, b, c;
    //    
    //    cout<<"Please enter the values of a, b, and c : ";
    //    
    //    cin>> a, b, c;
    //    
    //    cout<< "result = a * (b - c) + 1.37 = " << a * (b - c) + 1.37 << endl;
    
    
    
    
    //    float distance;
    //    
    //    cout<<"Please enter the distance in meters : "<<endl;
    //    
    //    cin>> distance;
    //    
    //    cout<<"There are "<<( distance * 100 ) / 2.54 << " inches in "<<distance<<" meters." <<endl;
    
    
    
    
    //    float celcius, kelvin, farenhight;
    //    
    //    cout<<"Please Enter The Temperature in Farenheight : "<<endl;
    //    
    //    cin >> farenhight;
    //    
    //    celcius =  (5/9)*(farenhight-32) ;
    //    kelvin = celcius -273.15;
    //    
    //    cout << farenhight << " F is equivalent to " << celcius << " C, and " << kelvin << " K."<<endl;
    
    
    // Write a program that will take the radius of a circle from the user. Then it will computeand print the area and perimeter of the circle
    
    
    
    
    //    problem
    //#include <math.h>
    //    float r, p, a;
    //    cout<< "Please enter the radius in meters : "<< endl;
    //    
    //    
    //    cin >> r;
    //    
    //    cout<<"The perimeter of this circle is "<< 2*M_PI*r<< " and the area is "<< M_PI*pow(r,2) <<endl;
    
    
    
    
    //    //problem
    //    float l, b, w, h;
    //    
    //    cout<<"Please Enter the length, and breadth of the rectangle, and the base and height of the triangle (in meters) : "<<endl;
    //    
    //    cin >> l, b, w, h;
    //    
    //    float at, ar;
    //    
    //    at = 0.5*w*h;
    //    
    //    ar = l * b;
    //    
    //    cout<< "The Area of the rectangle is " << ar << " meters, and the Area of the triangle is "<< at <<".\n"<<endl;
    
    
    
    
    //    int days, years, monthes, days_remaining;
    //    
    //    cout<< "Please Enter The Number Of Days : "<< endl;
    //    cin>> days;
    //    
    //    years = days/365;
    //    days_remaining = days%365;
    //    monthes = days_remaining / 30;
    //    days_remaining = days_remaining % 30;
    //    
    //    
    //    cout<<"There Are " << days_remaining << " days, " << monthes << " monthes, and " << years << " years, in " << days << " days."<<endl;
    
    
    
    /* Write a program that inputs number of cents (from 0 to 99) and outputs the
     minimal number of pennies (1 cent), nickels (5 cents), dimes (10 cents) and
     quarters (25 cents) with the same value. For example, 94 cents is the same as 3
     quarters, 1 dime, 1 nickel, and 4 pennies.*/
    
    
    //cout<< "Please Enter The Number Of Cents (from 0 to 99): " <<endl;
    //    
    //    int cent, pennies, nickels, dimes, quarters, remaining_cent;
    //    
    //    pennies
    //    
    
    
    
    //cout<< "Please Enter Your Age : "<<endl;
    //    int age;
    //    cin>> age;
    //    
    //    cout<<"Now Please Enter The Year : "<<endl;
    //    int year;
    //    cin>> year;
    //    
    //    int birth_year = year - age;
    //    cout<<"You Were Born In The Year " << birth_year <<endl;
    
    
    
    
    //    int n;
    //    
    //    cout<<"Please Enter Your 4D Number For Reversal : "<<endl;
    //    
    //    cin>> n;
    //    
    //    int a = n % 10;
    //    
    //    n /= 10;
    //    
    //    a = a*10 + a
    //    
    //    int b = n % 10;
    //    
    //    n /= 10;
    //    
    //    int c = n % 10;
    //    
    //    n /= 10;
    //    
    //    int d = n % 10;
    //    
    //    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    
    
    
    //    Write a program to find whether a number is odd or even.
    
    
    //    cout<< "Please Enter Your Number To Check If Its Odd Or Even : " <<endl;
    //    
    //    int n;
    //    cin>> n;
    //    
    //    if (n%2 == 0)
    //        cout<<n<< " is Even."<<endl ;
    //    
    //    else
    //        cout<< n << " is Odd."<<endl;
    
    
    
    
    
    
    
    
    //Write a program that takes an integer and checks if thenumber is divisible by 2, 3, 5, 7 and 10
    
    
    //    int n;
    //    cout<< "Please Enter Your Number To Check If It Is Divisible By 2, 3, 5, 7, and 10: " << endl;
    //    
    //    cin>> n;
    //    
    //    
    //    if ( (n%2 == 0) && (n%3 == 0) && (n%5 == 0) && (n%7 == 0) )
    //        cout<< "Yupp Mate, Tis Divisible!" <<endl;
    //    
    //    else
    //        cout<< "Nay Maight." <<endl;
    
    
    
    //    float n;
    //    
    //    do
    //        
    //        {
    //        cout<<"Please Enter A Number : "<<endl;
    //        cin>> n;
    //        }
    //    while(n != -1);
    //    
    //    cout<<"\nYou Entered The Barred Code! \n"<<endl;
    
    
    
    
    
    //    char n;
    //    
    //    do
    //        
    //    {
    //        cout<<"Please Enter A Character : "<<endl;
    //        cin>> n;
    //    }
    //    while(n != '.');
    //    
    //    cout<<"\nYou Entered The Barred Code! \n"<<endl;
    
    
    
    
    //    Write a program that will print the following series of integers.
    //    0,1,2,3,... 99
    //    5. Write a program that will print the following series of integers.
    //    42,41,40,39,... 17
    //    6. Write a program that will print the following series of floating point numbers.
    //    2.25,2.50,2.75,3.00,... 4.00
    
    
    //    cout<<"Using For Loop"<<endl;
    //    
    //    for (int iter = 0; iter <= 99; iter++)
    //        {
    //            cout<<iter<<endl<<endl;
    //        }
    
    
    //    cout<<"Using For While"<<endl;
    //    int iter = 0;
    //    
    //    while (iter <=99)
    //        {
    //            cout<<iter<<endl<<endl;
    //            iter++;
    //        }
    
    
    //    float n;
    //    for (n=1; n <50; n = n+0.5)
    //        {
    //            cout<<n<<endl<<endl;
    //        }
    
    
    //    char n;
    //    for (n='A'; n <='z';  n++)
    //    {
    //        cout<<n<<endl<<endl;
    //    }
    
    
    //    cout<<"Please Enter The Lower Limit : "<<endl;
    //    int l_lim;
    //    cin>> l_lim;
    //    
    //    cout<<"Please Enter The Upper Limit : "<<endl;
    //    int u_lim;
    //    cin>> u_lim;
    //    
    //    cout<<endl;
    //    
    //    for (l_lim; l_lim<= u_lim; l_lim = l_lim + 1)
    //        {
    //            cout<< l_lim<<endl;
    //        }
    
    
    //Take 10 floating point numbers from the user and then print the largest and smallest numbers among the 10 numbers.
    
    
    //    int counter = 0, num_term, max = 0, min = 0, term_tb_comp;
    //    
    //    cout<<"Please Enter The Number Of Inputs You Wanna Give : "<<endl;
    //    cin>> num_term;
    //    
    //    while (counter <= num_term)
    //        {
    //            cout<<"\nPlease Enter Your Number : " << endl;
    //            cin>>term_tb_comp;
    //            
    //            if (term_tb_comp>max)
    //                max = term_tb_comp;
    //            
    //            else if (term_tb_comp<min)
    //                min = term_tb_comp;
    //            
    //            counter = counter + 1;
    //            
    //        }
    //    cout<<"The Maximum Number Is "<< max<<endl;
    //    cout<<"The Minimum Number Is "<< min<<endl;
    
    
    
    
    //bug at 2
    //    bool flag = true;
    //    int term;
    //    
    //    cout<<"Please Enter Your Number To Check Primality : "<<endl;
    //    cin>> term;
    //    
    //    for (int divider = 2; divider <= (term/2); divider++)
    //        {
    //         if (term%divider==0)
    //             flag = false;
    //        }
    //    
    //    if (flag == true)
    //        cout<< term << " Is A Prime Number. \n";
    //        
    //    else
    //        cout<< term << " Is A Composite Number. \n";
    
    
    
    
    
    //    1) take no.
    //    2) divide / 20
    //    3) add to counter
    //    4) until no. = 0
    //    5) output counter
    
    
    //    cout<<"Please Enter Your Number : "<<endl;
    //    
    //    int n;
    //    
    //    cin>> n;
    //    
    //    int temp = n;
    //    int counter = 0;
    //    
    //    
    //    while (n>0)
    //        {
    //        n = n/10;
    //        counter ++;
    //        }
    //    
    //    cout<< temp << " Has " << counter << " Digits."<<endl<<endl;
    
    
    
    //Compute the sum, 𝑆 = 1 + 2 + 3 + ⋯ + 100
    
    //    1) num of term
    //    2) cout terms wid +
    //    3) when final term, give =
    
    
    //    cout<<"Please Enter The Number Of Terms You Wanna Sum : "<<endl;
    //    
    //    int n;
    //    cin>> n;
    //    
    //    int counter = 1;
    //    
    //    
    //    cout<< counter;
    //    
    //    int sum = 1;
    //    
    //    while (counter < n)
    //    {
    //        
    //        
    //    
    //        {
    //            counter++;
    //            sum = sum + counter;
    //            cout<<  " + " << counter;
    //        
    //        }
    //    }
    //    
    //    cout<< " = " << sum <<endl<<endl;
    
    
    
    
    //    cout<<"Compute the sum, 𝑆 = 1 + 3 + 5 + ⋯ + 99 : "<<endl<<endl;
    //    
    //    int n = 99;
    //    
    //    
    //    int counter = 1;
    //    
    //    
    //    cout<< counter;
    //    
    //    int sum = 1;
    //    
    //    while (counter < n)
    //    {
    //        
    //        
    //        
    //        {
    //            counter = counter +2;
    //            sum = sum + counter;
    //            cout<<  " + " << counter;
    //            
    //        }
    //    }
    //    
    //    cout<< " = " << sum <<endl<<endl;
    
    
    
    
    //6. Compute the sum, 𝑆 = 5 + 10 + 15 + ⋯ + 100
    
    //    cout<<"Compute the sum, 𝑆 = 5 + 10 + 15 + ⋯ + 100 : "<<endl<<endl;
    //    
    ////    1) for loop start 5, end 100 , increment *i
    ////    2) sum counter
    //
    //    cout << "5";
    //    int sum = 5;
    //    
    //    for (int iter = 10; iter<=100; iter = iter+5)
    //    {
    //        cout<<" + " <<iter;
    //        sum = sum + iter;
    //    }
    //    
    //    cout<<" = "<< sum<<endl<<endl;
    
    
    // Compute the sum, 𝑆 = 1 − 2 + 3 − 4 ... + 99 − 100
    //check
    
    
    
    //    cout<<"Compute the sum, 𝑆 = 1 − 2 + 3 − 4 ... + 99 − 100 : "<<endl<<endl;
    //
    //    /* 
    //     1) 1 to 100 prinit
    //     2) odd gular shamne +, even gular shamne -
    //     3) counter to get sum
    //    
    //    */
    //    
    //    int counter = 2;
    //    int sum = 1;
    //    
    //    for (int iter = 1; iter <= 100; iter++)
    //        {
    //            cout<<iter;
    //            
    //            if (counter == 101)
    //                {
    //                    cout<<" = "<<sum<<endl<<endl;
    //                    sum = sum + iter;
    //                    counter++;
    //                }
    //            
    //            
    //            else if (counter % 2)
    //                {
    //                    cout<<" - ";
    //                    sum = sum - iter;
    //                    counter++;
    //                }
    //            
    //            
    //            else
    //                {
    //                    cout<<" + ";
    //                    sum = sum + iter;
    //                    counter++;
    //                }
    //        }
    
    
    
    //not done
    //8. Compute the sum, 𝑆 = 1 + 2 + 4 + 8 + ⋯ + 1024
    
    
    //    int n, sum = 0;
    //    
    //    cout<<"Please Enter The Final Term Of The Series : "<<endl;
    //    
    //    cin>> n;
    //    
    //    
    //    for (int term = 1; term <= n; term = term*2)
    //        {
    //            cout<<term;
    //            if (term<n)
    //                cout<< " + " ;
    //            else
    //                cout<< " = ";
    //            
    //        }
    //    
    //    cout<<sum;
    
    
    //    not done
    //    9. Compute the sum, 𝑆 = 1 + 2 + 4 + 7 + 11 + ⋯ + 56
    //    
    //    
    //    1) number of terms
    //    2) sum = 0
    //    3) sum = sum + term
    //    4) counter = counter(0) + 1
    //    5) avg = sum/ counter
    
    
    
    //    cout<<"Please Enter The Number Of Terms You Want To Average : "<<endl;
    //    
    //    int n;
    //    
    //    cin>> n;
    //    
    //    int counter = 1;
    //    float sum = 0;
    //    float term;
    //    
    //    
    //    while (counter <= n)
    //    {
    //        cout<<"Please Enter Your "<< counter << " Number Term : "<<endl;
    //        
    //        cin>> term;
    //        
    //        sum = sum + term;
    //        
    //        counter = counter + 1;
    //    }
    //    
    //    float average;
    //    
    //    average = sum/(counter-1);
    //    
    //    cout<<"The Average Of The "<< counter-1 << " Numbers Is "<< average<<endl<<endl;
    
    
    
    
    //     Write a program that will take a floating point number x and an integer y. Then
    //    compute the value of 𝑥𝑦 without using the pow(x,y) function.
    //    
    //    1) float x, int y, counter = 0; temp =1;
    //    2) while counter != y, temp = x*temp; counter++
    //    3) cout
    
    //    float x;
    //    int y;
    //    int counter = 0;
    //    float temp = 1;
    //    
    //    cout<<"Please Enter The Base : "<<endl;
    //    cin>> x;
    //    
    //    cout<<"\n Please Enter The Power : "<<endl;
    //    cin>> y;
    //    
    //    
    //    while (counter != y)
    //    {
    //        temp = temp * x;
    //        counter++;
    //        
    //    }
    //    
    //    
    //    cout<<endl<<x<<" To The Power Of " << y << " Is " << temp <<"."<<endl<<endl;
    
    
    
    
    
    
    //    12. Write a program that will take an integer and compute its factorial.
    //    
    //    
    //    1) int num; fact = 1;
    //    2) fact = num * fact;
    //    3) num = num -1
    //    
    
    
    //    int num; int fact = 1;
    //    
    //    cout<<"Please Enter Your Number To Be Factorialized : " <<endl;
    //    cin>>num;
    //    
    //    int temp = num;
    //    
    //    while (temp != 1)
    //    {
    //        fact = fact * temp;
    //        temp = temp - 1;
    //        
    //    }
    //    
    //    cout<<"The Factorial Of " << num << " Is " << fact<<"."<<endl<<endl;
    
    
    
    
    
    //    Take an integer from the user and compute the sum of its digits. For example, if the
    //        user enters 4231, the output should be 10.
    
    
    //    1) int input;
    //    2) int sum = 0;
    //    3) int temp = input; temp_2 = temp % 10; temp = temp / 10;
    //    4) sum = sum + temp_2;
    
    
    
    
    //    cout<<"Please Enter Your Number Whose Sum You Wanna Find Out : " <<endl;
    //    
    //    int num;
    //    
    //    cin>> num;
    //    
    //    int sum = 0;
    //    
    //    int temp = num;
    //    int temp_2;
    //    
    //    while (temp != 0)
    //    {
    //        temp_2 = temp % 10;
    //        sum = sum + temp_2;
    //        temp = temp / 10;
    //    }
    //    
    //    cout<<"\nThe Sum Of The Digits In " << num << " Is " << sum<<endl<<endl;
    
    
    
    //    17. Write a program that will identify an Armstrong number. An Armstrong number is an integer such that the sum of the cubes of its digits is equal to the number itself. For example, 371 is an Armstrong number since 33 + 73 + 13 = 371.
    
    
    //    1) int num; sum, temp_2;
    //    2) int temp = num % 10; sum = sum (0) + temp; temp_2 = num/2;
    //    3) output
    
    
    
    //    int num, temp, temp_2;
    //    int sum = 0;
    //    
    //    temp_2 = num % 10;
    //    sum = temp_2 + sum;
    //    temp = num/
    
    
    //    int n = 13;
    //    if( n > 0 && n <= 10 ){
    //        n = n + 2;
    //        cout<<n;
    //    }
    //    else if( n > 20 || n < 15 ){
    //        n = n + 5;
    //        cout<< n;
    //    }
    //    else if( n == 13 ){
    //        n = n / 2;
    //        cout<< n;
    //    } else{
    //        cout<< n;
    //    }
    
    
    
    
    
    //    int val = 25;
    //    if( val % 5 == 0 ){
    //        cout<< val / 5 <<endl;
    //        val = val - 1; }
    //    if( val % 3 == 0 ){ val = val - 1;
    //        cout<< val / 10 <<endl;
    //    } else{
    //        cout<< val <<endl;
    //    }
    
    
    
    //    int i;
    //    for(i = 9; i > 1; i ̶= 2){
    //        cout<<(float) i/2<< "  ";
    //    }
    //    cout<<i;
    
    
    
    //    int j = 5;
    //    while( j <= 15 ){
    //        cout<< j <<endl;
    //        if( j % 10 == 0 )
    //            break;
    //        j++; }
    
    
    //    int c = 40; do{
    //        cout<< c + 1 << ",";
    //        c = c + 10;
    //    }while( c < 100 && c >= 50 );
    
    
    
    //    int n=1;
    //    while(n <= 10){
    //        cout<< 1 << endl;
    //        n += 2; }
    
    
    //    for(int i =5; i <= 15; i++){
    //        if(i%2!=0){
    //        cout<<i+1<<endl;
    //    }
    //    }
    
    
    //    int n = 5;
    //    while(n<=45){
    //        if(n%5==0){
    //            cout << n/5 << endl;
    //        }
    //        n = n + 10; }
    
    
    
    //    1) x, y cordinates, float;
    //    2) origin;
    //    3) x, y, axes;
    //    4) quads
    
    
    
    
    //    cout<<"x : ";
    //    
    //    float x;
    //    
    //    cin>> x;
    //    
    //    cout<<"y : ";
    //    
    //    float y;
    //    
    //    cin>> y;
    //    
    //    if ( ( x == 0 ) && ( y == 0 ) )
    //        cout<< "Origin."<<endl<<endl;
    //    
    //    else if ( ( x == 0 ) )
    //        cout<< " y axis. \n\n";
    //    
    //    else if ( (y == 0 ) )
    //        cout<< " x axis. \n\n";
    //    
    //    else if ( ( x > 0 ) && ( y > 0 ) )
    //        cout<<"1st Quadrant. \n\n";
    //    
    //    else if ( ( x < 0 ) && ( y > 0 ) )
    //        cout<<"2nd Quadrant. \n\n";
    //    
    //    else if ( ( x < 0 ) && ( y < 0 ) )
    //        cout << "3rd Quadrant. \n\n";
    //    
    //    else if ( ( x > 0 ) && ( y < 0 ) )
    //        cout<< "4th Quadrant. \n\n";
    
    
    
    
    
    //Write a program that computes the sum of the numbers between m and n that are divisible by p. User provides the value of m, n and p.
    
    
    //    1) int inputs p m n
    //    2) if n > m; n = temp; n = m; m = temp;
    //    3) loop, start = m; end = n; start ++
    //    4) if start % p == 0, cout << start;
    //    5) sum = sum + start
    //    6) if start < n; cout +
    //    7) else cout<< = <<sum;
    
    
    
    //bugg
    //    cout<<"Please Enter Starting and Finishing Range : " <<endl;
    //    int m, n, p, sum;
    //    sum = 0;
    //    
    //    cin>> m;
    //    cin>> n;
    //    
    //    cout<<"Please Enter p : " <<endl;
    //    
    //    cin>> p;
    //    
    //    
    //    if (m > n)
    //    {
    //        int temp;
    //        temp = m;
    //        m = n;
    //        n = temp;
    //    }
    //    
    //    for (int iter = m; iter<= n; iter++)
    //    {
    //        if ( (iter % p ) == 0 )
    //        {
    //            cout<< iter;
    //            sum = sum + iter;
    //        }
    //            if ( ( iter < n) )
    //                cout<< " + ";
    //        else
    //            cout<<" = ";
    //    
    //        
    //    }
    //   cout<< sum <<endl<<endl;
    
    
    
    //    a) loop for num;
    //    b) times table for one num
    //        c) times table via loop;
    //Write a program that generates and displays multiplication tables in reverse order for the data in the range m to n (m, n is given by the user). See the sample input output table for details.
    
    //    int m, n;
    //    
    //    cout<<"Please enter n : "<<endl;
    //    
    //    cin>> n;
    //    
    //    cout<< " m " <<endl;
    //    
    //    
    //    for (int j = n; j>=m; j--)
    //    {
    //    
    //        cout<<"Table For "<<j<<" : "<<endl;
    //        
    //        for (int i = 0; i <= 10; i++)
    //        {
    //            cout << i << " * " << j << " = " << i*j << endl;
    //        }
    //    
    //    }
    
    
    
    
    //    int m, n;
    //    cout<<"Enter Two Numbers: ";
    //    cin>>m>>n;
    //    
    //    //MAX and MIN
    //    int mx = m;
    //    int mn = n;
    //    if (mx < n)
    //    {
    //        mx = n;
    //        mn = m;
    //    }
    //    
    //    for (int j = mx;j >= mn;j--)
    //    {
    //        cout<<endl;
    //        
    //        //MULTIPLICATION TABLE
    //        for (int i = 1;i <= 10;i++)
    //            cout<<j<<" * "<<i<<" = "<<j * i<<endl;
    //    }
    
    
    
    //Write a program that computes the sum of the numbers between m and n that are divisible by p. User provides the value of m, n and p.
    
    
    
    //    1) calc and printing seq;
    //    2) printing + and =
    //    3) calculating sum
    //    4) printing sum
    //    
    
    //    cout<<"Please Enter m and n : " <<endl;
    //    
    //    int m, n;
    //    
    //    cin>> m;
    //    
    //    int min;
    //    
    //    min = m;
    //    
    //    cin>> n;
    //    
    //    int max;
    //    
    //    max = n;
    //    
    //    if (max < m)
    //    {
    //        m = max;
    //        n = min;
    //    }
    //    
    //    cout<< "Please Enter p : " <<endl;
    //    
    //    int p;
    //    
    //    cin>> p;
    //    
    //    
    //    
    //    int i;
    //    
    //    i = min;
    //    
    //    
    //    if (i % p == 0)
    //        cout<<i << " + " ;
    //    
    //    
    //    int sum;
    //    
    //    sum = i;
    //    
    //    for (int i = min+1; i <= max; i++)
    //    {
    //        
    //        if (i % p == 0)
    //        {cout<< i;
    //            
    //            sum = sum + i;
    //            
    //            if (i<max)
    //            {
    //             cout<< " + ";
    //            }
    //            
    //            else
    //                cout<< " = ";
    //        }
    //    }
    //    
    //    
    //    cout<< sum <<endl<<endl;
    
    
    
    //1) rows; columns
    //    2)if row % 2 == 0;
    //            cout E,
    //        else
    //            cout O
    
    
    
    //    int n;
    //    cout<<"Enter Number of Inputs: ";
    //    cin>>n;
    //    
    //    int x, mx;
    //    
    //    for (int i = 1;i <= n;i++)
    //    {
    //        cout<<"Enter Number "<<i<<": ";
    //        cin>>x;
    //        
    //        //cout<<x<<endl;
    //        
    //        if (i == 1)
    //            mx = x;
    //        else if (mx < x)
    //            mx = x;
    //    }
    //    
    //    cout<<"\nMax is "<<mx<<endl;
    
    /*for (int i = 0;i <= 4;i++)
     {
     if (i % 2 == 0)
     cout<<i<<" ";
     }*/
    
    
    
    
    
    
    //    bool res;
    //    
    //    cout <<  res = 3 > 2 || 2 == 1 && 1 <= 3 && 1 == 3;
    
    
    
    
    //1. Fill an integer array of size 100 with random numbers. Find the maximum, minimum and average value from the array.
    
    
    //    const int ArraySize = 100;
    //    
    //    int Array[ArraySize];
    //    
    //    
    //    srand(time(NULL));
    //    
    //    
    //    int UpperLimit = 100, LowerLimit = 1;
    //    
    //    cout<<"Lets See Our Array Contents : " <<endl<<endl;
    //    
    //    int sum = 0;
    //    
    //    for (int iter = 0; iter<ArraySize; iter++)
    //        {
    //            Array[iter] = LowerLimit + rand() % (UpperLimit - LowerLimit + 1);
    //            
    //            sum = sum + Array[iter];
    //            
    //            
    //            
    //            cout<< "The " << iter+1 << " Number Value Is " << Array[iter] << endl;
    //        }
    //
    //    
    //    int Max, Min;
    //    
    //    //Max = Array[0];
    //    
    //    
    ////    max = 1st value,
    ////    compare : max to 2nd value;
    ////    if 2nd value > : then max = 2nd val;
    ////    else 2nd val = min;
    //    
    //    if (Array[0] > Array[1])
    //    {
    //        Min = Array[1];
    //        Max = Array[0];
    //    }
    //    
    //    
    //    else
    //    {
    //        Min = Array[0];
    //        Max = Array[1];
    //    }
    //    
    //    
    //    for (int iter = 2; iter<ArraySize; iter++)
    //    {
    //        if (Array[iter] > Max)
    //            Max = Array[iter];
    //        
    //        else if (Array[iter] < Min)
    //            Min = Array[iter];
    //        
    //    }
    //    
    //    cout <<endl<< "Maximum : " << Max << endl;
    //    
    //    cout <<endl<< "Minimum : " << Min << endl<<endl;
    //    
    //    float average;
    //    
    //    float float_sum = sum;
    //    
    //    average = float_sum / ArraySize;
    //    
    //    cout<< "Average : " << average<<endl<<endl;
    
    
    
    
    // Ask the user to enter the size of an array. Create an integer array of the given size and fill it with random numbers. Print the array then take a target number from the user. Search the target value in the array. If the value is found, print the indices (index) where the value was found. Also print how many times the value was found in the array.
    
    
    //    1) enter array size, int,
    //    2) fill array with rand num.
    //    3) print array
    //    4) input numb
    //    5) search array for numb;
    //    6) if numb in array, print index of numb,
    //    7) how many times found
    
    
    
    //    int ArraySize;
    //    
    //    cout<<"Please Enter The Size Of Your Array : " << endl;
    //    
    //    cin>> ArraySize;
    //    
    //    
    //    
    //    int Array[ArraySize];
    //    
    //    
    //    int UpperLimit = ArraySize;
    //    
    //    int LowerLimit = 0;
    //    
    //    
    //    for (int iter = 0; iter<ArraySize; iter++)
    //                {
    //                    Array[iter] = LowerLimit + rand() % (UpperLimit - LowerLimit + 1);
    //                }
    //    
    //    cout<<endl;
    //    
    //    for (int iter = 0; iter<ArraySize; iter++)
    //    {
    //        cout<< "The Term In The " << iter << " Index Is " << Array[iter]<<endl;
    //    }
    //    
    //    
    //    cout<<endl;
    //
    //    
    //    
    //    cout<<"Now Give The Target Value You Wanna Locate : " <<endl<<endl;
    //    
    //    int target;
    //    
    //    cin>> target;
    //    
    //    int counter;
    //    
    //    
    //    cout<< "The Target Number " << target << " Is In The ";
    //    
    //    for (int iter = 0; iter<ArraySize; iter++)
    //    {
    //        if (target == Array[iter])
    //        {
    //            cout<< iter << " ";
    //            
    //            counter++;
    //        }
    //    
    //    }
    //
    //    cout <<"Number Index(es)."<<endl<<endl;
    
    
    //    //Write a program that counts the number of times each number occurs in an array.
    //    
    //    
    //    int ArraySize;
    //    
    //    cout<<"Please Enter The Size Of Your Array : " << endl;
    //    
    //    cin>> ArraySize;
    //    
    //    
    //    
    //    int Array[ArraySize];
    //    
    //    
    //    int UpperLimit = ArraySize;
    //    
    //    int LowerLimit = 0;
    //    
    //    
    //    for (int iter = 0; iter<ArraySize; iter++)
    //    {
    //        Array[iter] = LowerLimit + rand() % (UpperLimit - LowerLimit + 1);
    //    }
    //    
    //    cout<<endl;
    //    
    //    for (int iter = 0; iter<ArraySize; iter++)
    //    {
    //        cout<< "The Term In The " << iter << " Index Is " << Array[iter]<<endl;
    //    }
    //    
    //    
    //    cout<<endl;
    //
    //    
    //    for (int iter = 0; iter < ArraySize; iter++)
    //    {
    //        for (int iter_2 = 1; iter<ArraySize; iter++)
    //        {
    //            if (Array[iter] == Array[iter_2])
    //            {
    //                counter
    //            }
    //        }
    //    
    //
    
    
    
    
    //   6. Create an integer array of size 10. Fill the array by taking input from the user. Then
    // check if the array is sorted or not. If sorted then, print how it is sorted (ascending or
    //descending). If it is not sorted, print that it is not sorted.
    
    
    
    //    int Array[10];
    //    
    //    int CurrentTerm;
    //    
    //    
    //    cout<<"Please Enter The Term In 0 Number Index."<<endl;
    //    
    //    cin>> Array[0];
    //
    //    CurrentTerm = Array[0];
    //    
    ////    cout<<"Please Enter The Term In 1 Number Index."<<endl;
    ////    
    ////    cin>> Array[1];
    ////    
    ////    if CurrentTerm<Array[1]
    ////        co
    //    
    //    bool Flag = true;
    //    
    //    for (int iter = 1; iter < 10; iter++)
    //    {
    //        cout<<"Please Enter The Term In " << iter << " Number Index."<<endl;
    //        
    //        cin>> Array[iter];
    //        
    //    }
    //    
    //    
    //    for (int iter = 1; iter < 10; iter++)
    //    {
    //        if (CurrentTerm>Array[iter])
    //        {
    //            Flag = false;
    //            break;
    //        }
    //
    //    }
    //    
    //    
    //    
    //    cout<<endl;
    //    
    //    
    //    if (Flag == false)
    //        cout<< "The Array Is Not Sorted."<<endl<<endl;
    //    
    //    else
    //        cout<< "The Array Is Sorted."<<endl<<endl;
    
    
    
    
    //pending
    //    Populate an integer array with random values. Separate the even values and store
    //  them in another array and the odd numbers in another array. Print all three arrays.
    
    
    //    int ArraySize;
    //    
    //    cout<<"Please Enter The Size Of Your Array : "<<endl;
    //    
    //    cin>> ArraySize;
    //    
    //    cout<<endl<<endl;
    //    
    //    int Array[ArraySize];
    //    
    //    int UpperLimit = ArraySize;
    //    
    //        int LowerLimit = 0;
    //    
    //    
    //        for (int iter = 0; iter<ArraySize; iter++)
    //        {
    //            Array[iter] = LowerLimit + rand() % (UpperLimit - LowerLimit + 1);
    //        }
    //        
    //        cout<<endl;
    //    
    //    for (int iter = 0; iter<ArraySize; iter++)
    //            {
    //                cout<< "The Term In The " << iter << " Index Is " << Array[iter]<<endl;
    //            }
    //        
    //            
    //            cout<<endl;
    //    
    //    int OddArray[10];
    //    
    //    int EvenArray[10];
    //    
    //    for 
    
    
    
    //pending
    //11. Take a number from the user. Create an array of that size. Fill the array with the Fibonacci series. Print the array.
    
    
    //int ArraySize;
    //
    //cout<<"Please Enter The Size Of Your Array : "<<endl;
    //
    //cin>> ArraySize;
    //
    //cout<<endl<<endl;
    //
    //int Array[ArraySize];
    //
    //    Array[0] = 0;
    //    
    //    Array[1] = 0;
    //    
    //    Array[2] = 1;
    //    
    //
    //
    //    ArrayLast = Array[iter] + ArrayLast;
    
    
    
    
    
    
    //    int i,space,rows,k=0;
    //    //cout<<"Enter the number of rows: ";
    //    cin>>rows;
    //    for(i=1;i<=rows;++i)
    //    {
    //        for(space=1;space<=rows-i;++space)
    //        {
    //            cout<<"  ";
    //        }
    //        while(k!=2*i-1)
    //        {
    //            cout<<"* ";
    //            ++k;
    //        }
    //        k=0;
    //        cout<<"\n";
    //    }
    
    
    //printf("pakaman");
    
    
    
    //    int a, b, c, d, e, f;
    //    
    //    cout<<"Please enter a b c d e f : " <<endl;
    //    
    //    cin>> a;
    //    cin>>  b,
    //    cin>> c,
    //    cin>> d,
    //    cin>> e,
    //    cin>> f;
    //    
    //    goto poke;
    //    
    //    cout<< a;
    //    
    //    
    //    poke:
    //    
    //    cout << b;
    //    
    // 
    //    
    //  
    //    goto e;
    //    
    //    cout<< c;
    //    
    //    cout << d;
    //    
    //
    //    e:
    //    
    //    cout<< e;
    //    
    //    cout<< f;
    
    
    //    int ArrayA[5][3];
    //    
    //    for (int row = 0; row < 5; row++)
    //        for (int column = 0; column < 3; column++)
    //        {
    //            ArrayA[row][column] = column;
    //            
    //        }
    //
    //    for (int row = 0; row < 5; row++)
    //        for (int column = 0; column < 3; column++)
    //        {
    //            cout<< ArrayA[row][column];
    //            
    //            if (column ==2)
    //                cout<<endl;
    //
    //            
    //        }
    
    
    
    
    //pendo
    // Create a 5 by 3 array. Take two integers from the user. Fill the array with random floating point numbers between the numbers entered by the user. Then print the array.
    //    
    //    int row1, column1, row2, column2;
    //    
    //    cout<<"Please Enter The Number Of Rows In The First Array : "<<endl;
    //    
    //    cin>> row1;
    //    
    //    
    //    cout<<"Please Enter The Number Of Columns In The First Array : "<<endl;
    //    
    //    cin>> column1;
    //    
    //   
    //    int UpperLimit1, LowerLimit1;
    //    
    //    cout<<"Now Pleae Enter The Upper Limit Of The First Array : "<<endl;
    //    cin>> UpperLimit1;
    //    
    //    cout<<"Pleae Enter The Lower Limit Of The First Array : "<<endl;
    //    cin>> LowerLimit1;
    //    
    //    
    //    
    ////    cout<<"Please Enter The Number Of Rows In The Second Array : "<<endl;
    ////    
    ////    cin>> row2;
    ////    
    ////    cout<<"Please Enter The Number Of Columns In The Second Array : "<<endl;
    ////    
    ////    cin>> column2;
    //    
    //    
    ////    int UpperLimit2, LowerLimit2;
    ////    
    ////    cout<<"Now Pleae Enter The Upper Limit Of The First Array : "<<endl;
    ////    cin>> UpperLimit2;
    ////    
    ////    cout<<"Pleae Enter The Lower Limit Of The First Array : "<<endl;
    ////    cin>> LowerLimit2;
    //    
    //    
    //    int Array1[row1][column1];
    //    
    //    //int Array2[row2][column2];
    //    
    //    
    //    
    //    
    //    
    //   
    //    srand(time(0));
    //    for (int i = 0;i <= row1;i++)
    //        for (int j = 0; j<=column1; j++ )
    //        {
    //            Array1[i][j] = LowerLimit1 + rand() % (UpperLimit1 - LowerLimit1 + 1);
    //        }
    //    
    //    
    ////    srand(time(0));
    ////    for (int i = 0;i <= row2;i++)
    ////        for (int j = 0; j<=column2; j++ )
    ////        {
    ////            Array2[i][j] = LowerLimit2 + rand() % (UpperLimit2 - LowerLimit2 + 1);
    ////        }
    //    
    //
    //    
    //    cout<<"The First Array : "<<endl;
    //    for (int i = 0;i <= row1;i++)
    //    {
    //        for (int j = 0; j<=column1; j++)
    //        {
    //            cout<<Array1[i][j]<<" ";
    //    
    //            
    //            if (j>0)
    //            {
    //                if (column1%j==0)
    //                    cout<<endl;
    //            }
    //        }
    //    }
    //cout<<endl;
    
    
    // int A[10];
    //int n = 10;
    
    //    int Array[ArraySize];
    //
    //    int UpperLimit = ArraySize;
    //
    //        int LowerLimit = 0;
    //
    //
    //        for (int iter = 0; iter<ArraySize; iter++)
    //        {
    //            Array[iter] = LowerLimit + rand() % (UpperLimit - LowerLimit + 1);
    //        }
    //        
    //        cout<<endl;
    
    // Count the number of vowels, digits and words in a string.
    
    
    
    //    string text;
    //    
    //    cout<< "Please Enter Your Text : "<<endl;
    //    
    //    getline(cin, text);
    //    
    //    //int length = text.length();
    //    
    //    //cout<<endl<<"The length " <<length<<endl;
    //    
    //    
    ////    int size = text.size();
    ////    
    ////    cout<<endl<<"The size " <<size<<endl;
    //    
    //    
    
    //    int length = text.length();
    //    
    //    
    //    
    //    int vowel_counter;
    //    
    //    int digit_counter;
    //    
    //    int space_counter;
    //    
    //    
    //
    //    for (int iter = 0; iter < length; iter++)
    //    {
    //        if (( text[iter] == 'a')
    //            or
    //            ( text[iter] == 'e')
    //            or
    //            ( text[iter] == 'i')
    //            or
    //            ( text[iter] == 'o')
    //            or
    //            ( text[iter] == 'u')
    //            or
    //            ( text[iter] == 'A')
    //            or
    //            ( text[iter] == 'E')
    //            or
    //            ( text[iter] == 'I')
    //            or
    //            ( text[iter] == 'O')
    //            or
    //            ( text[iter] == 'U') )
    //        {
    //        
    //            vowel_counter++;
    //        
    //        }
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
    //    cout<<endl<<"There Are " << vowel_counter<<" Vowels In Your Text. "<<endl;
    //    
    //    cout<<endl<<"There Are " << digit_counter<<" Digits In Your Text. "<<endl;
    //    
    //    cout<<endl<<"There Are " << space_counter+1 <<" Words In Your Text. "<<endl<<endl;
    //    
    
    //    int b = 3;
    //    cout<< text[b];
    
    
    
    //Take a string from the user then replace all the vowels in that string with *.
    
    
    //    string text;
    //    
    //        cout<< "Please Enter Your Text : "<<endl;
    //    
    //        getline(cin, text);
    //    
    //
    //    
    //    int length = text.length();
    //    
    //    
    //    
    //    for (int iter = 0; iter < length; iter++)
    //    {
    //        if (( text[iter] == 'a')
    //            or
    //            ( text[iter] == 'e')
    //            or
    //            ( text[iter] == 'i')
    //            or
    //            ( text[iter] == 'o')
    //            or
    //            ( text[iter] == 'u')
    //            or
    //            ( text[iter] == 'A')
    //            or
    //            ( text[iter] == 'E')
    //            or
    //            ( text[iter] == 'I')
    //            or
    //            ( text[iter] == 'O')
    //            or
    //            ( text[iter] == 'U') )
    //        {
    //            
    //            text[iter] = '*';
    //            
    //        }
    //    }
    //    
    //        for ( int iter = 0; iter<length; iter++)
    //        {
    //            cout<< text[iter];
    //        }
    //    
    //    cout<<endl<<endl;
    
    
    
    
    //Take the name of the user and store it in a single string, then print the last name
    // followed by a comma, then print the initial letter of the first name followed by a dot. For example, if the user enters “Muhammad Shamsu”, your program should print “Shamsu, M.”
    
    
    //    1) input string, with space - getline diya;
    //    2) print last name, then comma, then 1st name ini, den .
    //    - after space er part, then , then sp, then 1st name ini .;
    
    
    //    cout<<"Please Enter Your Name : "<<endl;
    //    
    //    string name;
    //    
    //    getline(cin, name);
    //    
    //    int counter = 0;
    //    
    //    //int Name[counter];
    //    
    //    int location_space;
    //    
    //    int length = name.size();
    //    
    //    for (int iter = 0; iter < length; iter++)
    //    {
    //        if (name[iter] == ' ')
    //        {
    //            location_space = iter;
    //            
    //        }
    //    }
    //    
    //    for (int laster = location_space+1; laster < length; laster++)
    //    {
    //        cout<< name[laster];
    //    }
    //    
    //    cout<<", "<<name[0]<<"."<<endl<<endl;
    //    
    //    //way to terminate a branch of else if / if after 1 exe
    //    
    
    
    
    
    
    //6. Take a string from the user, print the reverse string.
    
    //    cout<<"Please Enter Your Text : "<<endl;
    //    
    //    string text;
    //    
    //    getline(cin, text);
    //    
    //    int length = text.size();
    //    
    //    cout<<endl;
    //    
    //    cout<<"Your Reversed Text Is : "<<endl;
    //    
    //    for (int iter = length - 1; iter>=0; iter--)
    //        cout<< text[iter];
    //    
    //    cout<<endl<<endl;
    
    
    
    //7. Take a sentence from the user and print only the first letters of each word.
    
    //    cout<<"Please Enter Your Text : "<<endl;
    //
    //    string text;
    //
    //    getline(cin, text);
    //
    //    int length = text.size();
    //
    //    cout<<endl;
    //
    //    for (int iter = 0; iter < length; iter++)
    //    {
    //        if ( iter == 0)
    //            cout << text[iter] << " ";
    //        
    //        else if (text[iter] == ' ')
    //        {
    //            cout<< text[iter+1]<<" ";
    //        }
    //    
    //    }
    //    
    //        cout<<endl<<endl;
    
    
    
    //Take a string from the user and count the number of uppercase letter, lowercase
    //letters and digits.
    
    
    //    cout<<"Please Enter Your Text : "<<endl;
    //
    //    string text;
    //
    //    getline(cin, text);
    //
    //    int length = text.size();
    //    
    //    int upper_counter = 0, lower_counter = 0, digit_counter = 0, letter_counter = 0, word_counter = 1;
    //    
    //    cout<<endl;
    //
    //    
    ////    for (int iter = 0; iter++; iter < length)
    ////    {
    ////        cout<<text[iter]<<endl;
    ////        
    ////        if (isspace(text[iter]))
    ////        {
    ////            word_counter++;
    ////        }
    ////            
    ////        else
    ////        {
    ////             if ((text[iter]) >= 'a' && (text[iter]) <= 'z')
    ////            {
    ////                upper_counter++;
    ////                letter_counter++;
    ////            }
    ////            
    ////            else if (islower(text[iter]))
    ////            {
    ////                lower_counter++, letter_counter++;
    ////            }
    ////            
    ////            else if (isdigit(text[iter]))
    ////            {
    ////                digit_counter++, letter_counter++;
    ////            }
    ////        }
    ////    }
    //    
    ////
    //    for (int iter = 0; iter<length; iter++)
    //    {
    //        cout<< text[iter]<<endl;
    //        
    //        if ( text[iter] >= 'a' && text[iter] <= 'z' )
    //        {
    //            lower_counter++;
    //            letter_counter++;
    //        }
    //        
    //        else if ( text[iter] >= 'A' && text[iter] <= 'Z')
    //        {
    //            upper_counter++;
    //            letter_counter++;
    //        }
    //        
    //        else if ( isdigit(text[iter]) )
    //        {
    //            digit_counter++;
    //            letter_counter++;
    //        }
    //        
    ////        else if ( text[iter] >= '0' && text[iter] <= 9)
    ////        {
    ////            digit_counter++;
    ////            letter_counter++;
    ////        }
    //        
    //        
    //        else
    //        {
    //            word_counter++;
    //        }
    //        
    //    
    //    }
    
    //    cout<<endl;
    //
    //    cout<<endl<<"There Are " << word_counter <<" Words In Your Text. "<<endl;
    //    
    //    cout<<endl<<"There Are " << letter_counter <<" Letters In Your Text. "<<endl;
    //
    //    cout<<endl<<"There Are " << upper_counter <<" Uppercase Characters In Your Text. "<<endl;
    //
    //    cout<<endl<<"There Are " << lower_counter <<" Lowercase Characters In Your Text. "<<endl;
    //
    //    cout<<endl<<"There Are " << digit_counter <<" Digits In Your Text. "<<endl<<endl;
    
    
    
    
    
    
    //pending
    
    //Take a sentence and print the words in reverse order (don’t reverse the string
    //character by character).
    
    
    
    //    cout<<"Please Enter Your Text To Be Reversed : "<<endl;
    //    
    //    string text;
    //    
    //    getline(cin, text);
    //    
    //    int full_length = text.size();
    //    
    //    for (int iter = 0; iter < full_length; iter++)
    //    {
    //        if ( isspace(text[iter]) )
    //        {
    //            int space_location = iter;
    //            
    //            for (int jiter = space_location - 1; jiter>= )
    //            
    //        }
    //            
    //    }
    //    
    //    
    ////    i/the cat danced
    ////    
    ////    o/eht tac decnad
    ////
    ////    1) location of space;
    ////    2) for loop upto location of space;
    
    
    
    
    
    //Write a program to check if a string is a number or not. Example: 12312 is a number
    //but 12312t34 is not a number.
    
    
    //    cout<<"Hello There!" <<endl;
    //    
    //    cout<<endl<<"Please Enter Your Test String : "<<endl;
    //    
    //    string test_text;
    //    
    //    getline(cin, test_text);
    //    
    //    int length;
    //    
    //    length = test_text.size();
    //    
    //    //cout<<length<<endl;
    //    
    //    bool number_flag = true;
    //    
    //    for (int iter = 0; iter < length; iter++)
    //    {
    //        if ( isdigit(test_text[iter]) )
    //        {
    //            continue;
    //        }
    //        
    //        else
    //        {
    //            number_flag = false;
    //            break;
    //        }
    //    }
    //    
    //    if (number_flag == true)
    //        cout<<endl<<"Your String Is A Number." <<endl<<endl;
    //    
    //    else
    //        cout<<endl<<"Your String Is Not A Number."<<endl<<endl;
    //    
    
    
    
    
    
    //Write a program that will ask the user’s month (Example: January, February..
    // December), year (Example: 1990,1992...2010) and date (Example:1,2,..31) of birth.
    //Then the program will print the date in the dd/mm/yy format.
    
    
    
    //    cout<<"Hello! \n\nPlease Enter The Date You Were Born In : "<<endl;
    //    
    //    int date;
    //    
    //    cin>> date;
    //    
    //   
    //    
    //    cout<<"\nNow Enter The Month You Were Born In : "<<endl;
    //    
    //    string month;
    //    
    //    cin>> month;
    //    
    //    string mm_month;
    //    
    //    bool mm_verifier = true;
    //    
    //    if (month == "January")
    //        mm_month = "01";
    //    
    //    //cout<<mm_month;
    //    
    //    else if (month == "February")
    //        mm_month = "02";
    //
    //    else if (month == "March")
    //        mm_month = "03";
    //    
    //    else if (month == "April")
    //        mm_month = "04";
    //    
    //    else if (month == "May")
    //        mm_month = "05";
    //    
    //    else if (month == "June")
    //        mm_month = "06";
    //    
    //    else if (month == "July")
    //        mm_month = "07";
    //    
    //    else if (month == "August")
    //        mm_month = "08";
    //    
    //    else if (month == "September")
    //        mm_month = "09";
    //    
    //    else if (month == "October")
    //        mm_month = "10";
    //    
    //    else if (month == "November")
    //        mm_month = "11";
    //    
    //    else if (month == "December")
    //        mm_month = "12";
    //    
    //    else
    //    {
    //        cout<<"\nThe Month You Entered Is Not In The Appropriate Format.\n\n";
    //        //string mm_month = "Invalid";
    //        
    //        mm_verifier = false;
    //    }
    //    
    //    
    //    cout<<"\nOne Last Thing, Give The Year You Were Born In : " <<endl;
    //    
    //    
    //   // cout<<"\nNow Enter The Year You Were Born In : "<<endl;
    //    
    //    int year;
    //    
    //    cin>> year;
    //    
    //    int yy_year = (year%100);
    //    
    // 
    //    if(mm_verifier)
    //    {
    //    cout<<"\n\nYour Birthdate Is " << date<<"/"<<mm_month<<"/"<<yy_year<<endl<<endl;
    //    }
    //    
    //    else
    //    {
    //        cout<<"\n\nYour Birthdate Is " << date<<"/Invalid Month/"<<yy_year<<endl<<endl;
    //
    //    }
    
    
    // Write a program to check if an identifier is valid or not. Identifier is the name of a
    //variable/class/function.
    
    
    //    cout<<"Please Enter Your Text To Check Its Validity As An Identifier : " <<endl;
    //    
    //    string identifier;
    //    
    //    cin>> identifier;
    //    
    //    //int length = identifier.size();
    //    
    //    if ( ( identifier[0]>='0'  && identifier[0]<='9' ) or isspace(identifier[0]) )
    //    {
    //        
    //            cout<<"\nYour Identifier Is Invalid.\n\n";
    //}
    //
    //    else
    //        cout<<"\nYour Identifier Is Valid.\n\n";
    
    
    
    
    //Create two 4 by 3 integer matrices called A and B. Add/subtract A and B and store the resultant matrix in C. Print A, B and C.
    
    
    //    int Rows = 4;
    //    
    //    int Columns = 3;
    //    
    //    int ArrayA[Rows][Columns];
    //    
    //    int ArrayB[Rows][Columns];
    //    
    //    //cout<<"\nNow Lets Print The 5x7 Grid\n\n";
    //    
    //    
    //    srand(time(NULL));
    //    int ll = 1, ul = 12;
    //    
    //    
    //    
    //    for (int jiter = 0; jiter< Rows; jiter++)
    //    {
    //        for (int iter = 0;iter < Columns;iter++)
    //            ArrayA[jiter][iter] = ll + rand() % (ul - ll + 1);
    //    }
    //
    //    
    //    for (int jiter = 0; jiter< Rows; jiter++)
    //    {
    //        for (int iter = 0;iter < Columns;iter++)
    //            ArrayB[jiter][iter] = ll + rand() % (ul - ll + 1);
    //    }
    //    
    //    
    //    
    //    cout<<"Array A : " <<endl;
    //    cout<<endl;
    //    
    //    for ( int iter = 0; iter < Rows; iter++ )
    //    {
    //        for ( int jiter = 0; jiter <= Columns; jiter++)
    //        {
    //            if (jiter < Columns)
    //                cout<< ArrayA[iter][jiter];
    //            
    ////                    if ( jiter == Columns-1)
    ////                        cout<<" ";
    //            
    //                    /*else*/ if (jiter != Columns)
    //                        cout<<", ";
    //            
    //            
    //            else
    //                cout<<endl;
    //        }
    //    }
    //    
    //    cout<<endl;
    //    //cout<<endl;
    //
    //    cout<<"Array B : " <<endl;
    //    cout<<endl;
    //    
    //    
    //    for ( int iter = 0; iter < Rows; iter++ )
    //    {
    //        for ( int jiter = 0; jiter <= Columns; jiter++)
    //        {
    //            if (jiter < Columns)
    //                cout<< ArrayB[iter][jiter];
    //            
    //            //                    if ( jiter == Columns-1)
    //            //                        cout<<" ";
    //            
    //            /*else*/ if (jiter != Columns)
    //                cout<<", ";
    //            
    //            
    //            else
    //                cout<<endl;
    //        }
    //    }
    //    
    //    cout<<endl;
    //    
    //    
    //    cout<<"Array C : " <<endl;
    //    cout<<endl;
    //    
    //    int ArrayC[Rows][Columns];
    //    
    //    
    //    for ( int iter = 0; iter < Rows; iter++ )
    //    {
    //        for ( int jiter = 0; jiter <= Columns; jiter++)
    //        {
    //            if (jiter < Columns)
    //            {
    //                
    //             ArrayC[iter][jiter] = ArrayA[iter][jiter] + ArrayB[iter][jiter];
    //            
    //                cout<< ArrayC[iter][jiter];
    //            }
    //            
    //            //                    if ( jiter == Columns-1)
    //            //                        cout<<" ";
    //            
    //            /*else*/ if (jiter != Columns)
    //                cout<<", ";
    //            
    //            
    //            else
    //                cout<<endl;
    //        }
    //    }
    //cout<<endl;
    //    cout<<endl;
    
    
    
    
    
    
    // Ask the user to enter row and column sizes. Create a matrix A. Store the transpose of A in another matrix B.
    
    
    
    //    
    //    1) input row, column
    //    2) array A matrix,
    //    3) array b - column, row
    //    4) populate array b,
    //    5) cout
    
    //    
    //    int row, column;
    //    
    //    cout<<"Please Enter The Number Of Rows Of Matrix A : "<<endl;
    //
    //    cin>> row;
    //
    //    
    //    cout<<"Now Please Enter The Number Of Columns Of Matrix A : "<<endl;
    //    
    //    cin>> column;
    //    
    //    
    //    cout<<endl;
    //
    //    cout<<endl;
    //
    //    
    //    int ArrayA[row][column];
    //    
    //    
    //        srand(time(NULL));
    //        int ll = 1, ul = row*column;
    //    
    //    
    //    
    //        for (int jiter = 0; jiter< row; jiter++)
    //        {
    //            for (int iter = 0;iter < column;iter++)
    //                ArrayA[jiter][iter] = ll + rand() % (ul - ll + 1);
    //        }
    //
    //    cout<<"Matrix A : "<<endl;
    //    
    //    for (int iter = 0; iter < row; iter++)
    //    {
    //        for (int jiter = 0; jiter < column; jiter++)
    //        {
    //            cout<<ArrayA[iter][jiter]<<" ";
    //        }
    //        cout<<endl;
    //    
    //    }
    //    
    //    int temp = row;
    //    
    //    row = column;
    //    
    //    column = temp;
    //    
    //    
    //    int ArrayB[row][column];
    //    
    //    for (int jiter = 0; jiter< row; jiter++)
    //    {
    //        for (int iter = 0;iter < column;iter++)
    //            ArrayB[jiter][iter] = ArrayA[iter][jiter];
    //    }
    //
    //    
    //    cout<<endl;
    //    
    //    cout<<endl;
    //    
    //    
    //    
    //    cout<<"Matrix B : "<<endl;
    //    
    //    for (int iter = 0; iter < row; iter++)
    //    {
    //        for (int jiter = 0; jiter < column; jiter++)
    //        {
    //            cout<<ArrayB[iter][jiter]<<" ";
    //        }
    //        cout<<endl;
    //        
    //    }
    //    
    //    
    //    
    //    
    //    cout<<endl;
    //    
    //    cout<<endl;
    //    
    
    
    
    //Create a 4 by 3 integer matrices called A and a 3 by 2 integer matrix called B. Multiply A and B and store the resultant matrix in C. Print A, B and C.
    
    
    //    int ArrayA[4][3];
    //    
    //    int ArrayB[3][2];
    //    
    //    int ArrayC[4][2];
    //    
    //    //int ArrayA[row][column];
    //    
    //    
    //            srand(time(NULL));
    //            int ll = 1, ul = 4*3;
    //    
    //    
    //    
    //            for (int jiter = 0; jiter< 4; jiter++)
    //            {
    //                for (int iter = 0;iter < 3;iter++)
    //                    ArrayA[jiter][iter] = ll + rand() % (ul - ll + 1);
    //            }
    //    
    //    
    //    
    //    for (int jiter = 0; jiter< 3; jiter++)
    //    {
    //        for (int iter = 0;iter < 2;iter++)
    //            ArrayB[jiter][iter] = ll + rand() % (ul - ll + 1);
    //    }
    //    
    //    
    //    
    //    cout<<endl;
    //    cout<<endl;
    //    
    //        cout<<"Matrix A : "<<endl;
    //    
    //        for (int iter = 0; iter < 4; iter++)
    //        {
    //            for (int jiter = 0; jiter < 3; jiter++)
    //            {
    //                cout<<ArrayA[iter][jiter]<<" ";
    //            }
    //            cout<<endl;
    //        
    //        }
    //
    //    cout<<endl;
    //    cout<<endl;
    //    
    //    
    //    cout<<"Matrix B : "<<endl;
    //    
    //    for (int iter = 0; iter < 3; iter++)
    //    {
    //        for (int jiter = 0; jiter < 2; jiter++)
    //        {
    //            cout<<ArrayB[iter][jiter]<<" ";
    //        }
    //        cout<<endl;
    //        
    //    }
    //    
    //    
    //    int Product[][];
    //    
    //    
    //    
    //    
    //    for (int jiter = 0; jiter< 4; jiter++)
    //    {
    //        for (int iter = 0;iter < 2;iter++)
    //           // ArrayA[jiter][iter] = Ar;
    //    }
    
    
    
    
    //    int row, column;
    //    
    //    cout<<"Please Enter The Number Of Rows : \n";
    //    cin>> row;
    //    
    //    cout<<"Please Enter The Number Of Columns : \n";
    //    cin>> column;
    //    
    //    int UpperLimit;
    //    
    //    cout<<"Please Enter The Upper Limit : \n";
    //    
    //    cin>> UpperLimit;
    //    
    //    UpperLimit = UpperLimit+1;
    //    
    //    int LowerLimit;
    //    
    //    cout<<"Please Enter The Lower Limit : \n";
    //    
    //    cin>> LowerLimit;
    //
    //
    //    int iArray[row][column];
    //    
    //    
    //    
    //    
    //    int prime_counter = 0;
    //        
    //    for (int iter = 0; iter < row; iter++)
    //        for (int jiter = 0; jiter < column; jiter++)
    //        {
    //            iArray[iter][jiter] = ((rand()%UpperLimit)+LowerLimit);
    //            
    //            bool flag = true;
    //            
    //            for (int pika = 2; pika <= (iArray[iter][jiter])/2;  pika++)
    //            {
    //                if (iArray[iter][jiter]%pika == 0)
    //                {
    //                    flag = false;
    //                }
    //            
    //                
    //            }
    //            
    //            if (flag == true)
    //                prime_counter++;
    //            
    //        }
    //
    //    
    //            //    for (int divider = 2; divider <= (term/2); divider++)
    //            //        {
    //            //         if (term%divider==0)
    //            //             flag = false;
    //            //        }
    //            //
    //            //    if (flag == true)
    //            //        cout<< term << " Is A Prime Number. \n";
    //            //        
    //            //    else
    //            //        cout<< term << " Is A Composite Number. \n";
    //            
    //            
    //            
    //            
    //            
    //            
    //    cout<<"\nYour Array Of Integers : \n";
    //    
    //    cout<<endl;
    //
    //    
    //    
    //    for (int iter = 0; iter < row; iter++)
    //    {
    //        for (int jiter = 0; jiter < column; jiter++)
    //        {
    //            cout<<iArray[iter][jiter]<<" ";
    //        }
    //        cout<<endl;
    //    
    //    }
    //    
    //    cout<<endl;
    //
    //    cout<<"And The Number Of Primes Are " << prime_counter<<".\n\n";
    
    
    
    
    //pending
    //6. Compute the average value of each of the columns of a 15 x 10 floating point array.
    
    
    //    int Array[15][10];
    //    
    //        int UpperLimit;
    //    
    //        cout<<"Please Enter The Upper Limit : \n";
    //    
    //        cin>> UpperLimit;
    //    
    //        UpperLimit = UpperLimit+1;
    //    
    //        int LowerLimit;
    //    
    //        cout<<"Please Enter The Lower Limit : \n";
    //        
    //        cin>> LowerLimit;
    //    
    // 
    //    
    //        for (int iter = 0; iter < 15; iter++)
    //            for (int jiter = 0; jiter < 10; jiter++)
    //            {
    //                Array[iter][jiter] = ((rand()%UpperLimit)+LowerLimit);
    //            }
    //    
    //    int Sum[10];
    //    
    //    
    //    
    //    for ( int pika = 0; pika<10; pika++)
    //    {
    //        int RunningTotal = 0;
    //        
    //        for (int chika = 0; chika < 15; chika++)
    //        {
    //            RunningTotal = Array[pika][chika] + RunningTotal;
    //            
    //        }
    //        
    //        Sum[pika] = RunningTotal;
    //    }
    //    
    //    
    //        cout<<"\nYour Array Of Integers : \n";
    //    
    //        cout<<endl;
    //    
    //    
    //    
    //        for (int iter = 0; iter < 15; iter++)
    //        {
    //            for (int jiter = 0; jiter < 10; jiter++)
    //            {
    //                cout<<Array[iter][jiter]<<" ";
    //            }
    //            cout<<endl;
    //        
    //        }
    //        
    //        cout<<endl;
    //
    //    
    //    
    //    for ( int iter = 0; iter < 10; iter++)
    //        cout<<Sum[iter]<<" ";
    //
    
    //    int a = 1, b = 6;
    //    
    //    cout<< &a << endl << &b<< endl << endl ;
    
    
    //    int A[10];
    //    int n = 10;
    //    srand(time(NULL));
    //    int ll , ul;
    //    
    //    cout<<"Enter Lower Level: ";
    //    cin>>ll;
    //    cout<<"Enter upper Level: ";
    //    cin>>ul;
    //    
    //    cout<<endl;
    //    for (int i = 0;i < n;i++)
    //        A[i] = ll + rand() % (ul - ll + 1);
    //    
    //    cout<<"Array: ";
    //    for (int i = 0;i < n;i++)
    //        cout<<A[i]<<" ";
    //    cout<<endl;
    //    int sumeven = 0, sumodd = 0;
    //    for (int i = 0;i < n;i++)
    //    {
    //        if(i % 2 == 0)
    //        {sumodd = sumodd + A[i];
    //        }
    //        else
    //        {
    //            sumeven = sumeven + A[i];
    //        }
    //    }
    //    cout<<"sum of the even number: "<< sumeven;
    //    cout<<endl;
    //    cout<<"sum of the odd number: "<< sumodd;
    //    cout<<endl;
    
    
    //    string number;
    //    cout<<"Ples no de ";
    //    
    //    cin>>number;
    //    cout<<endl<<number;'
    
    //Create a 2D Array and Randomly Populate them.
    //    Then, 1) sort the rows in an ascending order.
    //    2) sort the columns in an ascending order.
    
    
    //    
    //    int Array[4][6];
    //    
    //    srand(time(0));
    //    
    //    
    //    int UpperLim, LowerLim;
    //    
    //    cout<<"Please Enter The Lower Limit: ";
    //    
    //    cin>>LowerLim;
    //    
    //    cout<<"Please Enter The Upper Limit: ";
    //    
    //    cin>>UpperLim;
    //    
    //    
    //    for (int iter = 0; iter<4; iter++)
    //    {
    //        for (int jiter = 0; jiter<6; jiter++)
    //            Array[iter][jiter] = LowerLim + rand() %(UpperLim - LowerLim +1); //ll + rand() % (ul - ll + 1)
    //        
    //    }
    //    
    //    
    //    cout<<"Array Before Row Sort: "<<endl;
    //    
    //    for (int iter = 0; iter<4; iter++)
    //    {
    //        for (int jiter = 0; jiter<6; jiter++)
    //            cout<<Array[iter][jiter]<<" ";
    //        cout<<endl;
    //    }
    //    
    //    cout<<endl;
    //    cout<<endl;
    
    
    //    for (int iter=0; iter<4; iter++)
    //    {
    //        for (int jiter=0; jiter<6; jiter++)
    //        {
    //            if (Array[iter][jiter] > Array[iter][jiter+1])
    //            {
    //                int temp;
    //                
    //                temp = Array[iter][jiter];
    //                
    //                Array[iter][jiter] = Array[iter][jiter+1];
    //                
    //                Array[iter][jiter+1] = temp;
    //            }
    //        }
    //    }
    
    
    //for (int kiter = 6;)
    
    //    for (int jiter = 0; jiter < 6; jiter++)
    //    {
    //        if (Array[0][jiter] < Array[0][jiter+1])
    //        {
    //            int temp = Array[0][jiter];
    //            Array[0][jiter] = Array[0][jiter+1];
    //            Array[0][jiter+1] = temp;
    //        }
    //    }
    
    
    //    for (int jiter = 0; jiter< 4; jiter++)
    //    {
    //        
    //        if (Array[0][jiter] < Array[0][jiter+1])
    //        {
    //            int temp = Array[0][jiter];
    //            Array[0][jiter] = Array[0][jiter+1];
    //            Array[0][jiter+1] = temp;
    //        }
    //    }
    
    
    //    bubbleSortStraightForward(Array[][6], n);
    
    
    
    
    //    for (int i = 0;i < n - 1;i++)
    //    {
    //        for (int j = 0;j < n - 1 - i;j++)
    //        {
    //            if (Array[i][j] > Array[i][j + 1])
    //            {
    //                int temp = A[i][j];
    //                Array[i][j] = Array[i][j + 1];
    //                Array[i][j + 1] = temp;
    //            }
    //        }
    //    }
    
    
    
    
    
    //    cout<<"Array After Row Sort: "<<endl;
    //    
    //    for (int iter = 0; iter<4; iter++)
    //    {
    //        for (int jiter = 0; jiter<6; jiter++)
    //            cout<<Array[iter][jiter]<<" ";
    //        cout<<endl;
    //    }
    //    
    //    cout<<endl;
    //    cout<<endl;
    
    
    //    cout<<"Please Enter The Number Of Rows: ";
    //    int Rows;
    //    cin>>Rows;
    //    
    //    cout<<"Please Enter The Number Of Columns: ";
    //    int Columns;
    //    cin>>Columns;
    //    
    //    int Array[Rows][Columns];
    //    
    //    srand(time(0));
    //    
    //    
    //    int UpperLim, LowerLim;
    //    
    //    cout<<"Please Enter The Lower Limit: ";
    //    
    //    cin>>LowerLim;
    //    
    //    cout<<"Please Enter The Upper Limit: ";
    //    
    //    cin>>UpperLim;
    //    
    //    
    //    for (int iter = 0; iter<Rows; iter++)
    //    {
    //        for (int jiter = 0; jiter<Columns; jiter++)
    //            Array[iter][jiter] = LowerLim + rand() %(UpperLim - LowerLim +1); //ll + rand() % (ul - ll + 1)
    //        
    //    }
    //    
    //    
    //    cout<<"Array Before Row Sort: "<<endl<<endl;
    //    
    //    for (int iter = 0; iter<Rows; iter++)
    //    {
    //        for (int jiter = 0; jiter<Columns; jiter++)
    //            cout<<Array[iter][jiter]<<" ";
    //        cout<<endl;
    //    }
    //    
    //    cout<<endl;
    //    cout<<endl;
    //    
    //    
    //    int Sum1 = 0;
    //    
    //    for (int iter = 0; iter < Rows; iter++)
    //    {
    //        Sum1 = Sum1 + Array[iter][iter];
    //    }
    //    
    //    
    //    //cout<<Sum1;
    //    
    //    
    //    int Sum2 = 0;
    //    
    //    for (int iter = 0; iter < Rows; iter++)
    //    {
    //        for (int jiter = 0; jiter < Columns; jiter = jiter + 1)
    //        {
    //            if ( (iter + jiter) == Rows-1 )
    //            {
    //                Sum2 = Sum2 + Array[iter][jiter];
    //            }
    //        }
    //    }
    //    
    //    
    //    //cout<<Sum2<<endl;
    //    
    //    if (Sum2 < Sum1)
    //    {
    //        int temp = Sum2;
    //        Sum2 = Sum1;
    //        Sum1 = temp;
    //    }
    //    
    //    int Difference= Sum2 - Sum1;
    //    
    //    
    //    cout<<"Difference In Sum Of The Diagonals Is: \n" << Sum2 <<" - " << Sum1 << " = " << Difference<<".\n"<<endl;
    //    
    //    
    //    
    //    //   cout<<Difference<<".\n\n";
    
    
    
    //    int balance_counter = 1;
    //    
    //    int balance_sum = 0, balance;
    //    //int BalanceArray[10];
    //    
    //    while(balance_counter != 13)
    //    {
    //        cout<<"Please Enter Your Balance For The " << balance_counter <<" Month (In Pence):";
    //        
    //        //cin>> BalanceArray[balance_counter-1];
    //        
    //        cin>>balance;
    //        
    //        balance_sum = balance_sum + balance;
    //        
    //        balance_counter++;
    //        
    //        cout<<endl;
    //        
    //    }
    //    
    //    cout<<"Your Average Balance For The 12 Monthes Is: $"<< float(balance_sum)/ (100)*(balance_counter-1)<<".\n\n";
    
    
    
    
    //    string NameArray[10];
    //    
    //    
    //    for (int iter = 0; iter < 10; iter++)
    //    {
    //        cout<<"Please Enter The Name Of Your "<< iter+1 << " Number Friend: ";
    //        
    //        getline(cin, NameArray[iter]);
    //        
    //        cout<<endl;
    //        
    //    }
    //    
    //    cout<<"Your FriendList :\n";
    //    
    //    for (int jiter = 0; jiter < 10; jiter++)
    //    {
    //        cout<<jiter+1<<") "<<NameArray[jiter]<<endl;
    //    }
    //    
    //    cout<<endl;
    //    
    //    int j, temp;
    //    
    //    for (int i = 0; i < 10; i++){
    //        j = i;
    //        
    //        while (j > 0 && Array[j] < Array[j-1]){
    //            temp = NameArray[j];
    //            NameArray[j] = Array[j-1];
    //            Array[j-1] = temp;
    //            j--;
    //        }
    //    }
    
    
    
    //    int ArraySize;
    //    
    //    cout<<"Please Enter The Size Of Your Array : "<<endl;
    //    
    //    cin>> ArraySize;
    //    
    //    //<<endl;
    //    
    //    int Array[ArraySize];
    //    
    //    int UpperLimit;
    //    
    //    int LowerLimit;
    //    
    //    cout<<"Please Enter The Lower Limit: ";
    //    cin>>LowerLimit;
    //    cout<<endl;
    //    
    //    cout<<"Please Enter The Upper Limit: ";
    //    cin>>UpperLimit;
    //    cout<<endl;
    //    
    //    
    //    for (int iter = 0; iter<ArraySize; iter++)
    //    {
    //        Array[iter] = LowerLimit + rand() % (UpperLimit - LowerLimit + 1);
    //    }
    //    
    //    
    //    for (int jiter = 0; jiter < ArraySize; jiter++)
    //    {
    //        cout<<Array[jiter]<<", ";
    //    }
    //    
    //    cout<<endl;
    //    cout<<endl;
    
    
    // for (int jiter = 0; jiter <= ArraySize-1; jiter++ )
    //    {
    //        for (int iter=0; iter < ArraySize-1; iter++)
    //        {
    //            if (Array[iter] < Array[iter+1])
    //            {
    //                int Temp = Array[iter];
    //                Array[iter] = Array[iter+1];
    //                Array[iter+1] = Temp;
    //            }
    //        }
    //    }
    
    
    
    //    int j, temp;
    //    
    //    for (int i = 0; i < ArraySize; i++){
    //        j = i;
    //        
    //        while (j > 0 && Array[j] < Array[j-1]){
    //            temp = Array[j];
    //            Array[j] = Array[j-1];
    //            Array[j-1] = temp;
    //            j--;
    //        }
    //    }
    
    
    
    
    //    for (int jiter = 0; jiter < ArraySize; jiter++)
    //    {
    //        cout<<Array[jiter]<<", ";
    //    }
    
    
    
    
    // Take a string from the user, print the reverse string.
    
    //    cout<<"Please Enter A String: ";
    //    
    //    string text;
    //    
    //    getline(cin, text);
    //    
    //    int Size = text.size();
    //    
    //    for (int iter = Size-1; iter>-1; iter--)
    //    {
    //        cout<<text[iter];
    //    }
    //    
    //    
    //        cout<<endl;
    //        cout<<endl;
    
    
    
    //    cout<<"Please Enter A String: ";
    //    
    //    string text;
    //    
    //    getline(cin, text);
    //    
    //    int Size = text.size();
    //    
    //    
    //    if (!(isspace(text[0])))
    //        cout<<text[0]<<' ';
    //    
    //    for (int iter = 0; iter<Size; iter++)
    //    {
    //        //cout<<text[iter];
    //        
    //        
    //        
    //        if (isspace(text[iter]))
    //        {
    //            cout<<text[iter+1]<<' ';
    //        }
    //        
    //        
    //    }
    //    
    //    
    //    cout<<endl;
    //    cout<<endl;
    
    
    
    //10. Check if an email address is valid or not. A valid email address will have the format:
    //    xxxxxxx@xxxxx.xxx. The email address must contain a part before the at (@),
    //  another part after at (@) and before the dot (.) and the last part after the dot (.).
    
    
    
    //    
    //    cout<<"Please Enter Your E-Mail: ";
    //    
    //    string text;
    //    
    //    getline(cin, text);
    //    
    //    int Size = text.size();
    //    
    //    
    //    if (text.rfind('@') == text.npos)
    //        cout<<"kjYour E-Mail Is Invalid."<<endl<<endl;
    //    
    //    else if (text[0] == '@')
    //        cout<<"yrYour E-Mail Is Invalid."<<endl<<endl;
    //    
    //    else if (text.rfind('.') < text.rfind('@'))
    //        cout<<"hereYour E-Mail Is Invalid."<<endl<<endl;
    //    
    //    
    //    
    //    bool CharCheck = true;
    //    
    //    for (int iter = 0; iter < Size; iter++)
    //    {
    //        if ( !((tolower(text[iter]) >= 'a' && (tolower(text[iter]) <= 'z' || ((text[iter]) == '_' || ((text[iter]) == '@' || isdigit(text[iter])))
    //                                               {
    //                                                   cout<<"Invalid Email";
    //                                               }
    //                                               
    //                                               }
    
    
    
    //    Write a program to check if a string is a number or not. Example: 12312 is a number
    //        but 12312t34 is not a number.
    
    //    
    //    cout<<"Please Enter Your Number: ";
    //    
    //    string text;
    //    
    //    getline(cin, text);
    //    
    //    int Size = text.size();
    //    
    //    //    for (int iter = 0; iter < Size; iter++)
    //    //    {
    //    //        if ( !isdigit(text[iter]) || text[iter] != '.')
    //    //        {
    //    //            cout<<"invalid";
    //    //            cout<<text[iter];
    //    //            break;
    //    //        }
    //    //    }
    //    
    //    
    //    bool NumberChecker = true;
    //    
    //    int point_counter = 0;
    //    
    //    for (int iter = 0; iter < Size; iter++)
    //    {
    //        if (text[iter] == '.')
    //        {
    //            point_counter++;
    //        }
    //        if (iter == 0)
    //        {
    //            if (!isdigit(text[iter]))
    //            {
    //                NumberChecker = false;
    //                //cout<<"nop";
    //                break;
    //            }
    //        }
    //        
    //        else if (!(isdigit(text[iter]) || text[iter] == '.'))
    //        {
    //            NumberChecker = false;
    //            //            cout<<"nop";
    //            break;
    //        }
    //        
    //        
    //        //        else
    //        //            cout<<"yes";
    //    }
    //    
    //    if (point_counter>1)
    //        NumberChecker = false;
    //    
    //    if (NumberChecker == true)
    //    {
    //        cout<<"\nIt Is A Valid Number.\n\n";
    //    }
    //    
    //    else
    //        cout<<"It Is Not A Valid Number.\n\n";
    
    
    
    //    Write a program that will ask the user’s month (Example: January, February..
    //                                                    December), year (Example: 1990,1992...2010) and date (Example:1,2,..31) of birth.
    //    Then the program will print the date in the dd/mm/yy format.
    //    
    
    
    
    //    cout<<"Please Enter Your Birth Date: ";
    //    string Date;
    //    cin>>Date;
    //    
    //    
    //    cout<<"Please Enter Your Birth Month: ";
    //    string Month;
    //    cin>>Month;
    //    
    //    
    //    
    //    cout<<"Please Enter Your Birth Year: ";
    //    string Year;
    //    cin>>Year;
    //    
    //    
    //    string DD = "";
    //    
    //    if (Date.size()<2)
    //    {
    //        DD = DD + "0" + Date;
    //    }
    //    
    //    else
    //        DD = Date;
    //    
    //    //cout<<DD;
    //    
    //    string MM;
    //    
    //    if (Month == "January")
    //        MM = "01";
    //    
    //    
    //    else if (Month == "February")
    //        MM = "02";
    //    
    //    
    //    else if (Month == "March")
    //        MM = "03";
    //    
    //    
    //    
    //    string YY = "";
    //    
    //    //YY = Year[(Year.size()-2)] + Year[(Year.size()-1)];
    //    
    //    
    //    //cout<<YY;
    //    
    //    YY =  YY + Year[(Year.size()-2)] + Year[(Year.size()-1)];
    //    
    //    //cout<<YY;
    //    
    //    cout<<endl<<"Your Birth Date Is: "<< DD << "/" << MM << "/" << YY << " (DD/MM/YY)"<<endl<<endl;
    
    
    
    //int num;
    
    
    //cout<<"Please Enter Your Number: ";
    
    //cin>> num;
    
    //    for (int num = 0; num <= 100; num++ )
    //    {
    //        
    //        if (Divisible_Five_Seven (num))
    //            cout << num << "\t" << "Yes" <<endl;
    //        
    //        else
    //            cout << num << "\t" << "No" <<endl;
    //    }
    //    
    //    cout<<endl;
    
    
    //    
    //    int ArraySize;
    //    
    //    cout<<"Please Enter The Size Of Your Array : "<<endl;
    //    
    //    cin>> ArraySize;
    //    
    //    //<<endl;
    //    
    //    int Array[ArraySize];
    //    
    //    int UpperLimit;
    //    
    //    int LowerLimit;
    //    
    //    cout<<"\nPlease Enter The Lower Limit: ";
    //    cin>>LowerLimit;
    //    cout<<endl;
    //    
    //    cout<<"Please Enter The Upper Limit: ";
    //    cin>>UpperLimit;
    //    cout<<endl;
    //    
    //    
    //    for (int iter = 0; iter<ArraySize; iter++)
    //    {
    //        Array[iter] = LowerLimit + rand() % (UpperLimit - LowerLimit + 1);
    //    }
    //    
    //    
    //    for (int jiter = 0; jiter < ArraySize; jiter++)
    //    {
    //        cout<<Array[jiter]<<", ";
    //    }
    //    
    //    cout<<endl;
    //    cout<<endl;
    //    
    //    
    //    //    if (ArraySize % 2 == 0)
    //    //        int Mid =
    //    
    //    
    //    //    for (int iter = 0; iter < (ArraySize/2); iter++)
    //    //    {
    //    //        for (int jiter = (ArraySize-1); jiter> ((ArraySize/2) + 1); jiter++)
    //    //        {
    //    //            int Temp{Array[iter]};
    //    //            
    //    //            Array[iter] = Array[jiter];
    //    //            Array[jiter] = Temp;
    //    //        }
    //    //    }
    //    
    //    
    //    ArrayReverser(Array, ArraySize);
    //    
    //    
    //    
    //    
    //    
    //    for (int jiter = 0; jiter < ArraySize; jiter++)
    //    {
    //        cout<<Array[jiter]<<", ";
    //    }
    //    
    //    cout<<endl;
    //    cout<<endl;
    //
    
    
    
    //    1) cell no. 11 digit;
    //    2) 0 & 1 = 0 , 1
    
    //    int counter{0};
    //    
    //    while(counter != 7)
    //    {
    //        cout<<"Please Enter Your Cell Number: ";
    //        
    //        string No;
    //        
    //        cin>> No;
    //        
    //        
    //        bool Validity = true;
    //        
    //        //        if (No.size() == 11)
    //        //        {
    //        //            Validity = true;
    //        //            cout<<"1 Valid Number.\n\n";
    //        //        }
    //        //        
    //        //        
    //        //            if ((No[0] == '0') && (No[1] == '1'))
    //        //            {
    //        //                Validity = true;
    //        //                cout<<"2 Valid Number.\n\n";
    //        //            }
    //        
    //        
    //        
    //        
    //        //        cout<< No[0] << endl << No[1];
    //        //        
    //        //        if (No[0] != '0' || No[1] != '1')
    //        //            cout<<"Nope";
    //        //        
    //        //        else
    //        //            cout<<"Yupp";
    //        
    //        
    //        //        
    //        //        if (Validity)
    //        //            cout<<"Valid Number.\n\n";
    //        //        
    //        //        else
    //        //            cout<<"Invalid Number.\n\n";
    //        
    //        
    //        if (No.size() != 11)
    //        {
    //            if (No[0] != '0')
    //            {
    //                if (No[1] != '1')
    //                {
    //                    Validity = false;
    //                }
    //            }
    //        }
    //        
    //        
    //        cout<<Validity;
    //        
    //        counter++;
    //    }
    
    
    
    
    //    Problem 1Complete the following C++ class by writing the function absDifference() which populates and outputs the arrayC where an element in the arrayC is the absolute difference of the corresponding elements of array A and array B.
    //
    
    
    
    //    while(true)
    //    {
    //        cout<<"Please Enter The Size Of Your Arrays: ";
    //        
    //        int A;
    //        
    //        cin>> A;
    //        
    //        cout<<endl;
    //        
    //        
    //        int UpperLim, LowerLim;
    //        
    //        cout<<"Please Enter The Lower Limit: ";
    //        cin>> LowerLim;
    //        cout<<endl;
    //        
    //        cout<<"Please Enter The Upper Limit: ";
    //        cin>> UpperLim;
    //        cout<<endl;
    //        
    //        int ArrA[A], ArrB[A], ArrC[A];
    //        
    //        srand(time(0));
    //        
    //        for (int iter = 0; iter < A; iter++)
    //        {
    //            ArrA[iter] = LowerLim + rand() % (UpperLim - LowerLim +1 );
    //            cout<<ArrA[iter]<<" ";
    //        }
    //        
    //        cout<<endl;
    //        
    //        // srand(time(0));
    //        
    //        for (int iter = 0; iter < A; iter++)
    //        {
    //            ArrB[iter] = LowerLim + rand() % (UpperLim - LowerLim +1 );
    //            cout<<ArrB[iter]<<" ";
    //        }
    //        
    //        cout<<endl;
    //        cout<<endl;
    //        
    //        
    //        AbsDifference(ArrA, ArrB, ArrC, A);
    //        
    //        
    //    }
    
    
    
    
    
    //    
    //    Complete the given function which takes a string as parameter anddisplay all words that start with an uppercase letter.
    
    
    //    
    //    string text;
    //    
    //    cout<<"Please Enter Your String: ";
    //    
    //    getline(cin, text);
    //    
    //    
    //    cout<<endl;
    //    
    //    
    //    UpperCasers(text);
    //    //    {
    //    //        for (int iter = 0; iter < text.size(); iter++)
    //    //        {
    //    //            if (text[iter] >= 'A' && text[iter] <= 'Z')
    //    //            {
    //    //                int jiter {iter};
    //    //                while (text[jiter] != ' ' && jiter < text.size())
    //    //                {
    //    //                    cout<<text[jiter];
    //    //                    
    //    //                    jiter++;
    //    //                }
    //    //                cout<<' ';
    //    //            }
    //    //        }
    //    //    }
    
    
    
    
    
    //    Write a function that takes an array of numbers and returns the sum of digits of all the numbers in the array. The function cannot populate the array or display the result. The array can be of any size.
    
    
    //    cout<<"Please Enter The Size Of Your Array: ";
    //    
    //    int A;
    //    
    //    cin>> A;
    //    
    //    cout<<endl;
    //    
    //    
    //    int UpperLim, LowerLim;
    //    
    //    cout<<"Please Enter The Lower Limit: ";
    //    cin>> LowerLim;
    //    cout<<endl;
    //    
    //    cout<<"Please Enter The Upper Limit: ";
    //    cin>> UpperLim;
    //    cout<<endl;
    //    
    //    int ArrA[A];
    //    
    //    srand(time(0));
    //    
    //    for (int iter = 0; iter < A; iter++)
    //    {
    //        ArrA[iter] = LowerLim + rand() % (UpperLim - LowerLim +1 );
    //        cout<<ArrA[iter]<<" ";
    //    }
    //    
    //    cout<<endl;
    //    cout<<endl;
    //    
    //    
    //    //    int ArrayDigitAdder (ArrA, A)
    //    //    {
    //    //    int Sum = 0;
    //    //    
    //    //    
    //    //    
    //    //    for (int iter = 0; iter < A; iter++)
    //    //    {
    //    //        
    //    //        int kiter = ArrA[iter];
    //    //        
    //    //        
    //    //        while (kiter != 0)
    //    //        {
    //    //            int last_temp = kiter % 10;
    //    //            Sum = Sum + last_temp;
    //    //            kiter = kiter / 10;
    //    //        }
    //    //        
    //    //    }
    //    //    
    //    //        return Sum;
    //    //    }
    //    
    //    cout<<ArrayDigitAdder (ArrA, A)<<endl<<endl;
    
    
    
    
    
    
    
    //    You are given an array of n unique positive integers, and a positive integer k. Write a function that will find and return integer immediate smaller of k in the array as well as its array index. If no integer is less than k then return -1 for both integer and its index.
    
    
    //    
    //    cout<<"Please Enter The Size Of Your Array: ";
    //    
    //    int A;
    //    
    //    cin>> A;
    //    
    //    cout<<endl;
    //    
    //    
    //    int UpperLim, LowerLim;
    //    
    //    cout<<"Please Enter The Lower Limit: ";
    //    cin>> LowerLim;
    //    cout<<endl;
    //    
    //    cout<<"Please Enter The Upper Limit: ";
    //    cin>> UpperLim;
    //    cout<<endl;
    //    
    //    int ArrA[A];
    //    
    //    srand(time(0));
    //    
    //    for (int iter = 0; iter < A; iter++)
    //    {
    //        ArrA[iter] = LowerLim + rand() % (UpperLim - LowerLim +1 );
    //        cout<<ArrA[iter]<<" ";
    //    }
    //    
    //    cout<<endl;
    //    cout<<endl;
    //    
    //    
    //    
    //    int Max;
    //    
    //    cout<<"Please Enter The Value Whose Smaller You Want To Find: ";
    //    
    //    cin>>Max;
    //    
    //    cout<<endl;
    //    cout<<endl;
    //    
    //    
    //    int Second_Max = ArrA[0];
    //    int Second_Max_Loc;
    //    
    //    for (int iter = 1; iter < A; iter++)
    //    {
    //        if (ArrA[iter] > Second_Max  &&   ArrA[iter] < Max)
    //        {
    //            Second_Max = ArrA[iter];
    //            Second_Max_Loc = iter;
    //        }
    //    }
    //    
    //    cout<<"SM "<<Second_Max<<"SM L ";//<<Second_Max_Loc<<endl;
    
    //    You are given an array of n unique positive integers, and a positive integer k. Write a function that will find and return integer immediate smaller of k in the array as well as its array index. If no integer is less than k then return -1 for both integer and its index.
    char c;
    cin>> c;
    char b = c - 1;
    cout<<endl<<c<<endl<<b;
    
    
    if (isupper(b))
        b= tolower(b);
    
    cout<<endl<<b;
    return 0;
    
}



//void bubbleSortStraightForward(int A[][6], int n)
//{for (int j = 0; j < )
//    for (int i = 0;i < n - 1;i++)
//    {
//        for (int j = 0;j < n - 1 - i;j++)
//        {
//            if (A[j] > A[j + 1])
//            {
//                int temp = A[j];
//                A[j] = A[j + 1];
//                A[j + 1] = temp;
//            }
//        }
//    }
//}



//for (int iter = 0; iter < row; iter++)
//for (int jiter = 0; jiter < column; jiter++)
//{
//    iArray[iter][jiter] = ((rand()%UpperLimit)+LowerLimit);
//}}
