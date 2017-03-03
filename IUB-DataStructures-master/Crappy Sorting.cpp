#include <iostream>

using namespace std;


void crappy_sort_des(int Arr[], int ArrSize);

void crappy_sort_asc(int Arr[], int ArrSize);


int main()
{
	int ArrSize = 4;

	int Array[ArrSize];
	Array[0]  = 1;
	Array[1] = 2;
	Array[2] = 3;
	Array[3] = 4;

	crappy_sort_des(Array, ArrSize);

	crappy_sort_asc(Array, ArrSize);

	int Arrayi[] = {1,2,3};

	// for (int iter = 0; iter < 3; iter ++)
	// {
	// 	cout<<Arrayi[iter] <<endl;
	// }



	return 0;
}




void crappy_sort_des(int Arr[], int ArrSize)
{
	for (int iter = 0; iter < ArrSize - 1; iter++)
	{
		for (int jiter = iter + 1; jiter < ArrSize; jiter++)
		{
			if (Arr[iter] < Arr[jiter])
			{
				int temp = Arr[iter];
				Arr[iter] = Arr[jiter];
				Arr[jiter] = temp;
			}
		}

		
	}

	cout<<"Your Array Has Been Sorted Descendingly!" <<endl;

		cout<<"Sorted Array: ";

		for (int iter = 0; iter < ArrSize; iter++)
		{
			cout<<Arr[iter];
			if (iter != ArrSize -1)
				cout<< ", ";

		}

		cout<<endl;
}



void crappy_sort_asc(int Arr[], int ArrSize)
{
	for (int iter = 0; iter < ArrSize - 1; iter++)
	{
		for (int jiter = iter + 1; jiter < ArrSize; jiter++)
		{
			if (Arr[iter] > Arr[jiter])
			{
				int temp = Arr[iter];
				Arr[iter] = Arr[jiter];
				Arr[jiter] = temp;
			}
		}

		
	}

	cout<<"Your Array Has Been Sorted Ascendingly!" <<endl;

		cout<<"Sorted Array: ";

		for (int iter = 0; iter < ArrSize; iter++)
		{
			cout<<Arr[iter];
			if (iter != ArrSize -1)
				cout<< ", ";

		}

		cout<<endl;
}
