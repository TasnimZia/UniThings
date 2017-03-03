#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	for (int iter = 0; iter < 10; iter++)
	{
		int jiter = rand();

		cout<<1 + rand() % (9) + 1  <<endl;
	}

	return 0;
}

