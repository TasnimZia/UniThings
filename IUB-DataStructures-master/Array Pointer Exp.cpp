#include <iostream>

#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{

         cout<<"Please enter rows, columns, and pages." <<endl;

         cout<<"Rows: ";
         int rows;
         cin>>rows;

         cout<<"Columns: ";
         int columns;
         cin>> columns;

         cout<<"Pages: ";
         int pages;
         cin>> pages;


         int Array[rows][columns][pages];

	       srand(time(0));

           // for (int j = 0; j<=10; j++ )
           // {
           //     cout<< 0 + rand() % (10 + 1) <<" ";
           // }

        for (int iter = 0; iter < pages; iter++)
        {
          int odd_counter = 0;

          cout<<"Page " << iter+1 <<": "<<endl;
            for (int jiter = 0; jiter < columns ; jiter++)
            {

              for (int piter = 0; piter < rows; piter++)
              {
                  Array[piter][jiter][iter] = 10 + rand() % (99-10+1); 

                  cout<<Array[piter][jiter][iter] << " ";

                  if (Array[piter][jiter][iter] % 2 != 0)
                  {
                    odd_counter++;
                  }
              }

              cout<<endl;

            }

cout<<"Odd Counter: " << odd_counter<<endl<<endl;
           // cout<<endl;
        }


//           srand(time(0));

           // for (int j = 0; j<=10; j++ )
           // {
           //     cout<< 0 + rand() % (10 + 1) <<" ";
           // }


        int * a_pointer[0][0][0] = Array;

        cout<<"Array: " << Array <<endl;
        cout<<"Array Pointer: " << a_pointer <<endl;
        



	return 0;
}
