#include <iostream>

using namespace std;

void printArray(int data[])
{
    for(int i = 0, length = sizeof(data); i < length; ++i)
    {
        std::cout << data[i] << ' ';
    }
    std::cout << std::endl;
}

int main()
{
    // int data[] = { 5, 7, 8, 9, 1, 2 };
    // printArray(data);

	int E[10] = {1};

	for (int iter = 0; iter < 10; iter++)
	{
		cout<<E[iter] << " ";
	}

	cout<<endl;

	cout<<sizeof(int)<<endl;
	cout<<sizeof(float)<<endl;
	cout<<sizeof(double)<<endl;
	cout<<sizeof(char)<<endl;
	cout<<sizeof(string)<<endl;
	cout<<sizeof(bool)<<endl;
	
	return 0;
}