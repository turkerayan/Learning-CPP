#include "Lib.h"

Math::Math(int a, int b) : a(a), b(b)
{
}

int Math::sum(int a, int b)
{
	return this->a + this->b;
}

int sum(int a, int b)
{
	return a + b;
}

