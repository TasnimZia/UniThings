#include <iostream>

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
    int data[] = { 5, 7, 8, 9, 1, 2 };
    printArray(data);
	return 0;
}