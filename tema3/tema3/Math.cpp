#include "Math.h"
#include <cstdlib>
#include <cstdarg>

/*#define addFunction(type1, type2) \
type Math:: Add(type a, type b) \
{ \
	type s = a + b; \
	return s; \
}*/

int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Add(int a, int b, int c)
{
	return a + b + c;
}

int Math::Add(double a, double b)
{
	return a + b;
}

int Math::Add(double a, double b, double c)
{
	return a + b + c;
}

int Math::Mul(int a, int b)
{
	return a * b;
}

int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}

int Math::Mul(double a, double b)
{
	return a * b;
}

int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}

int Math::Add(int count, ...)
{
	int sum = 0;
	int x;
	va_list args;
	va_start(args, count);

	for (unsigned i = 1; i <= count; ++i)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return sum;
}

char* Math::Add(const char* s1, const char* s2)
{
	if (s1 == nullptr || s2 == nullptr)
		return nullptr;
	char* buffer = (char*)(malloc(sizeof(s1) + sizeof(s2) + 1));
	return buffer;
}


