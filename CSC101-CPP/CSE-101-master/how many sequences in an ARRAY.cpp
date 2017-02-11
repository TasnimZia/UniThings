/*
find how many sequences are in an ARRAY


In : 1, 1, 3, 2, 5
Out: 1
In : 1, 2, 2, 2, 3, 3, 1
Out: 2
*/

#include<iostream>

using namespace std;

int main()
{
    int a, x, ch,counter = 0, Scount = 0;

    // Array Size
    cout<<"Size of the array: ";
    cin >> x;
    cout<<endl;
    int A[x];


    //ARRAY POPULATE
    for(int i = 0; i < x; i++)
    {
        cout << "Number for position " << i << " :";
        cin >> a;
        A[i]= a;
    }

    //Check for sequence
    ch = A[0]; // ch = 1st value
    for(int i = 1; i < x; i++)
    {


        if(ch == A[i])
        {
            if(i < x-1)
                counter++;

            if(i == x-1) // for the last position
            {
                counter++;
                Scount = Scount + (counter / counter);
            }
        }

        else // when sequence breaks
        {
            if(counter != 0)
            Scount = Scount + (counter / counter);

            ch = A[i];
            counter = 0; // reset counter



        }

    }

    cout<<endl<<"Total number of sequences: "<< Scount <<endl;


    return 0;
}


