#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()

{
   int n = 100,mx,i;
   int A[100];

    cout<<"Sample Inputs:"<<endl;
   srand(time(0));
   for(i = 0; i < n; i++)
   {
       A[i] = rand();

       cout<< A[i] <<" ";

       if(i == 0)
        mx = A[i];

       else if(A[i] > mx)
        mx = A[i];
   }

   cout<<endl<<endl<<"Maximum Number is: "<< mx <<endl<<endl;
		return 0;
}
