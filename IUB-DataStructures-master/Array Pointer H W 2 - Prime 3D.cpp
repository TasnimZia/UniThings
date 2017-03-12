
#include <iostream>

#include <cstdlib>
#include <ctime>


using namespace std;

bool prime_checker(int num)
{
    int n = num;
    int i;
  bool isPrime = true;


  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  return isPrime;
}

int main()
{

         cout<<"Please enter rows." <<endl;

         cout<<"Rows: ";
         int rows;
         cin>>rows;

         // cout<<"Columns: ";
         // int columns;
         // cin>> columns;

         // cout<<"Pages: ";
         // int pages;
         // cin>> pages;


         // int Array[rows][columns][pages];


         cout<<endl;


         int ColumnsArray[rows];

         for (int jiter = 0; jiter < rows; jiter++)
         {
          cout<<"How many columns are there in row number " << jiter << "? "<<endl;

          cout<<"Columns in Row " << jiter <<": " ;

          cin>> ColumnsArray[jiter];
         }


         // for (int iter = 0; iter < rows; iter++)
         // {
         //  cout<<ColumnsArray[iter] <<endl;
         // }


         cout<<endl;



         int ** Array = new int * [rows];



         srand(time(0));

         for (int iter = 0; iter < rows; iter++)
         {
          Array[iter] = new int[ColumnsArray[iter]];

          for (int jiter = 0; jiter < ColumnsArray[iter]; jiter++)
          {
            Array[iter][jiter] = 10 + rand() % (89 + 1);

            if (prime_checker(Array[iter][jiter]))
                cout<<Array[iter][jiter] <<", ";
          }
          cout<<endl;
         }

return 0;
}
