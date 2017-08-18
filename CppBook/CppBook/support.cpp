#include <iostream>
#include "start.h"

extern int count3;

void write_extern(void)
{
	std::cout << "eCount is " << count3 << std::endl;
}