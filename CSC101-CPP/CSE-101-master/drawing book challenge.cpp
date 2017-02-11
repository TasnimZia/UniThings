#include <iostream>


using namespace std;


int main(){

    int n;
    cin >> n;
    int p;
    cin >> p;

    // your code goes here

    //determining which side to start from

    int turn;

    if(n % 2 == 0)      //when last page is EVEN numbered
    {
       if(n-p >= p-1)
        turn = (p+1)/2;

       else
        turn = (n-p)/2;
    }

    else                //when last page is ODD numbered
    {
        if(n-p > p-1)
            turn = (p)/2;

        else if(n-p == p-1)
            turn = (n-p) / 2;

        else
            turn = n-p-1;
    }


    cout<<turn;     // print number of page-turns


    return 0;
}
