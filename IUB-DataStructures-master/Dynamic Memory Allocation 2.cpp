// char* pvalue  = NULL;   // Pointer initialized with null
// pvalue  = new char[20]; // Request memory for the variable


// delete [] pvalue;        // Delete array pointed to by pvalue



// int ROW = 2;
// int COL = 3;
// double **pvalue  = new double* [ROW]; // Allocate memory for rows

// // Now allocate memory for columns
// for(int i = 0; i < COL; i++) {
//     pvalue[i] = new double[COL];
// }




// for(int i = 0; i < ROW; i++) {
//    delete[] pvalue[i];
// }
// delete [] pvalue; 




#include <iostream>
using namespace std;

class Box {
   public:
      Box() { 
         cout << "Constructor called!" <<endl; 
      }
		
      ~Box() { 
         cout << "Destructor called!" <<endl; 
      }
};

int main( ) {
   Box* myBoxArray = new Box[4];

   delete [] myBoxArray; // Delete array

   return 0;
}