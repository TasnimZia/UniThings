// double* pvalue  = NULL; // Pointer initialized with null
// pvalue  = new double;   // Request memory for the variable


// double* pvalue  = NULL;
// if( !(pvalue  = new double )) {
//    cout << "Error: out of memory." <<endl;
//    exit(1);

// }


// delete pvalue;        // Release memory pointed to by pvalue


#include <iostream>
using namespace std;

int main () {
   double* pvalue  = NULL; // Pointer initialized with null
   pvalue  = new double;   // Request memory for the variable
 
   *pvalue = 29494.99;     // Store value at allocated address
   cout << "Value of pvalue : " << *pvalue << endl;

   delete pvalue;         // free up the memory.

   return 0;
}



