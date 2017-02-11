/*
write a program to find whether a smaller string
is in a bigger string or not
##without using built in library functions##

sample input: larger one:  bangladesh
              smaller one: desh
sample output: yes


sample input: larger one:  bangladesh
              smaller one: banglp
sample output: no
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
    string x,y; //declare string

    // initialize variables

    int i=0;
    int j=0;
    int c=0;

    //take input

    cout<<"Enter bigger string: ";
    cin>>x;
    cout<<"Enter smaller string: ";
    cin>>y;
    cout<<endl;

    //loop to find the position of 1st matching letter
    for(; i<x.size(); i++)
    {
        if(y[0] == x[i])
        {
            c = i; //copy of the 1st matched position
            break;
        }

    }

    //loop for checking y in x

    while(j<y.size() && y[j] == x[i])
    {
        i++;
        j++;

    }

    //conclusion depending on final values of i & j
    if(j==(y.size()) && i-j==c)
        cout<<"\""<<y<<"\""<<" is present in "<<"\""<<x<<"\""<<endl<<endl;

    else
        cout<<"\""<<y<<"\""<<" is not present in "<<"\""<<x<<"\""<<endl<<endl;


    return 0;
}
