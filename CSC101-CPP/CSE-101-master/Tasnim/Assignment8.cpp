//Write a program that takes in row number as input and prints out the following pattern:
//*
//* *
//* * *
//* * * *

#include <iostream>      //This includes InputOutput Library

using namespace std;

int main()      //This is the main function
{    //Start of main body
    int rows;        //Declares integer variable with label : rows

    cout<<"Please enter your number of rows: ";     //Prompts the user for number

    cin>>rows;      //Takes user input and stores it in variable

    cout<<endl;     //Creates one line gap

    // for loop execution

    for (int a = 0; a <= rows; a++)     //Declaring and initializing the loop integer as a; evaluates the condition which is a <= rows; states the increment a a++
    {
        for (int b = 0; b < a; b++)     //Declaring and initializing the loop integer as b; evaluates the condition which is b < a; states the increment as b++
        {
            cout<<"* ";     //Displays the '*' in order of rows and column
        }

        cout<<endl;     //Creates one line gap
    }

    return 0;       //End of program
} //End of main body
