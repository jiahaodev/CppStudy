#include <iostream>
#include "b.h"

A_class fun(A_class first, A_class next)
{
	A_class ret;
	ret.x = next.x - first.x;
	ret.y = next.y - first.y;
	ret.z = next.z - first.z;
	return ret;
}
