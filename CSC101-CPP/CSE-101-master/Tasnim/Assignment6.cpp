#include <iostream>      //This includes InputOutput Library

using namespace std;

int main ()     //This is the main function
{   //Start of main body

    int a, b;       //Declares integer variable with label : a, b

    cout<<"Please enter first number: ";         //Prompts the user for number

    cin>>a;      //Takes user input and stores it in variable

    cout<<"Please enter second number: ";        //Prompts the user for number

    cin>>b;      //Takes user input and stores it in variable

    int sum = 0;        //Declares integer variable with label : sum and equals it to 0

    for (int iter = 0; iter < b; iter++)
    {
        sum=sum+a;      //Equation to conduct the operation
    }

    cout<<endl<<sum<<endl;      //Displays the number to the user

    return 0;   //End of program
}//End of main body

