#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()

{
    //DECLEARATION
    int n = 5,c = n;
    int A[5];



    //POPULATE
    srand(time(NULL));
    int ll = 0,ul = 9;

    int i;

    for(i = 0; i < n; i++)
        A[i] = ll + rand() % (ul - ll + 1);


    //DISPLAY
    cout<<"Sample array: ";
    for (int i = 0;i < n;i++)
        {
            cout<< A[i] <<" ";

        }
    cout<<endl;


    //LOOP for MAX n SWAP
   do{
        //MAX
    int mx,mem;

    for (int i = 0;i < n;i++)
    {
        if(i == 0)
            {
                mx = A[i];
                mem = i;
            }
        else if(A[i] > mx)
           {
            mx = A[i];
            mem = i;
           }

    }


    //SWAP
    int temp;

    temp = A[mem];
    A[mem] = A[n-1];
    A[n-1] = temp;


    n--;

   }while(n>0);

   //DISPLAY
    cout<<"Output Array: ";
    for (int i = 0;i < c;i++)
        cout<<A[i]<<" ";


    cout<<endl;



		return 0;
}

