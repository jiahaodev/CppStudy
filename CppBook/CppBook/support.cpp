#include <iostream>

extern int eCount;

void write_extern(void)
{
	std::cout << "eCount is " << eCount << std::endl;
}