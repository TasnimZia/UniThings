#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()

{
    //DECLEARATION
    int A[5],B[5],C[5];
    int a = 5,b = 5,c = 5;

    srand(time(NULL));
    int ll = 0,ul = 9;
    int i;


    //POPULATE A
    for(i = 0; i < a; i++)
        A[i] = ll + rand() % (ul - ll + 1);

    //DISPLAY A
    cout<<"Array A: ";
    for (int i = 0;i < a;i++)
        {
            cout<< A[i] <<" ";

        }
    cout<<endl;

    //POPULATE B
    for(i = 0; i < a; i++)
        B[i] = ll + rand() % (ul - ll + 1);

     //DISPLAY B
    cout<<"Array B: ";
    for (int i = 0;i < b;i++)
        {
            cout<< B[i] <<" ";

        }
    cout<<endl<<endl;



//POPULATE C
    for(i = 0; i < a; i++)
    {
        C[i] = A[i] + B[i];
    }

//DISPLAY C
    cout<<"Array C: ";
    for (int i = 0;i < c;i++)
        {
            cout<< C[i] <<" ";

        }
    cout<<endl<<endl;


/*Practice problem :
C[0] = B[0] + A[4]
C[1] = B[1] + A[3]
C[2] = B[2] + A[2]
C[3] = B[3] + A[1]
C[4] = B[4] + A[0]
*/

    int D[5];
    int d=5;

    int j=d-1;
    for(i = 0; i < a; i++)
    {

        D[i] = A[j] + B[i];
        j--;
    }

    cout<<"Practice problem: "<<endl;
    //DISPLAY D
    cout<<"Array D: ";
    for (int i = 0;i < c;i++)
        {
            cout<< D[i] <<" ";

        }
    cout<<endl;


		return 0;
}

