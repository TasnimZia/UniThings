#include<iostream>
#include<cstdlib>
using namespace std;

class templateOverloading{


public:

		template < class T >  // or template< typename T >
		T maximum( T value1, T value2, T value3 )
		{
		   T maximumValue = value1; // assume value1 is maximum

		   // determine whether value2 is greater than maximumValue
		   if ( value2 > maximumValue )
		      maximumValue = value2;

		   // determine whether value3 is greater than maximumValue
		   if ( value3 > maximumValue )
		      maximumValue = value3;

		   return maximumValue;
		} // end function template maximum

};




int main()
{
	   int int1, int2, int3;
	   templateOverloading obj;

       cout << "Input three integer values: ";
	   cin >> int1 >> int2 >> int3;

		   // invoke int version of maximum
		   cout << "The maximum integer value is: "
		      << obj.maximum( int1, int2, int3 );

		   // demonstrate maximum with double values
		   double double1, double2, double3;

		   cout << "\n\nInput three double values: ";
		   cin >> double1 >> double2 >> double3;
		   cout << "The maximum double value is: "
		      << obj.maximum( double1, double2, double3 );

		   // demonstrate maximum with char values
		   char char1, char2, char3;

		   cout << "\n\nInput three characters: ";
		   cin >> char1 >> char2 >> char3;

		   // invoke char version of maximum
		   cout << "The maximum character value is: "
		      << obj.maximum( char1, char2, char3 ) << endl;
		   return 0; // indicates successful termination
}
