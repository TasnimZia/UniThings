#include <iostream>

#include <cstdlib>
#include <ctime>


using namespace std;

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

            cout<<Array[iter][jiter] <<", ";
          }
          cout<<endl;
         }









// 	       

//            // for (int j = 0; j<=10; j++ )
//            // {
//            //     cout<< <<" ";
//            // }

//         for (int iter = 0; iter < columns; iter++)
//         {
//           int odd_counter = 0;

//           cout<<"Page " << iter+1 <<": "<<endl;
//             for (int jiter = 0; jiter < columns ; jiter++)
//             {

//               for (int piter = 0; piter < rows; piter++)
//               {
//                   Array[piter][jiter][iter] = 10 + rand() % (99-10+1);

//                   cout<<Array[piter][jiter][iter] << " ";

//                   if (Array[piter][jiter][iter] % 2 != 0)
//                   {
//                     odd_counter++;
//                   }
//               }

//               cout<<endl;

//             }

// cout<<"Odd Counter: " << odd_counter<<endl<<endl;
//            // cout<<endl;
//         }


// //           srand(time(0));

//            for (int j = 0; j<=10; j++ )
//            {
//                cout<< 0 + rand() % (10 + 1) <<" ";
//            }




	return 0;
}

