#include <iostream>
#include "Number.h"
#include <cstring>
#include <cmath>

Number::Number(const char* val, int base)
{
	this->base = base;
	memcpy(value, val, strlen(val) + 1);
}

Number::Number(const Number& other)
{
	this->base = other.base;
	memcpy(this->value, other.value, strlen(other.value) + 1);
}

Number::~Number()
{
	delete value;
}

void Number::SwitchBase(int newBase)
{
	this->base = newBase;
	int nr = atoi(this->value);
	itoa(nr, this->value, newBase);
}

void Number::Print()
{
	std::cout << *value;
}

int Number::GetDigitsCount()
{
	return strlen(value);
}

int Number::GetBase()
{
	return base;
}

Number& operator+(const Number& l, const Number& r)
{
	int xl, xr, x;
	int finalBase;
	Number l_copy = l;
	Number r_copy = r;
    char* val;
	if (l_copy.base > r_copy.base) {
		finalBase = l_copy.base;
		r_copy.SwitchBase(finalBase);  
		xl = atoi(l_copy.value);
		xr = atoi(r_copy.value);
		x = xl + xr;
		itoa(x, val, finalBase);
	}
	else {
		finalBase = r_copy.base;
		l_copy.SwitchBase(finalBase); 
		xl = atoi(l_copy.value);
		xr = atoi(r_copy.value);
		x = xl + xr;
		itoa(x, val, finalBase);
	}
	Number sum(val , finalBase);
	return sum;
}

Number& operator-(const Number& l, const Number& r)
{
	int xl, xr, x;
	int finalBase;
	Number l_copy = l;
	Number r_copy = r;
	char* val;
	if (l_copy.base > r_copy.base) {
		finalBase = l_copy.base;
		r_copy.SwitchBase(finalBase);
		xl = atoi(l_copy.value);
		xr = atoi(r_copy.value);
		x = xl - xr;
		itoa(x, val, finalBase);
	}
	else {
		finalBase = r_copy.base;
		l_copy.SwitchBase(finalBase);
		xl = atoi(l_copy.value);
		xr = atoi(r_copy.value);
		x = xl - xr;
		itoa(x, val, finalBase);
	}
	Number dif(val, finalBase);
	return dif;
}

bool operator==(const Number& l, const Number& r)
{
	int xl, xr;
	itoa(xl, l.value, 10);
	itoa(xr, r.value, 10);
	return xl == xr;
}

bool operator!=(const Number& l, const Number& r)
{
	return !(l == r);
}

Number& operator--(const Number& l)
{
	Number l_copy = l;
	int nr = atoi(l_copy.value);
	nr--;
	itoa(nr, l_copy.value, l_copy.base);
	return l_copy;
}

Number& operator--(const Number& l, int)
{
	Number l_copy = l;
	return l_copy;
	int nr = atoi(l.value);
	nr--;
	itoa(nr, l.value, l.base);
	
}

char operator[](int i)
{
	return value[i];
}

bool operator>(const Number& l, const Number& r)
{
	int xl, xr;
	itoa(xl, l.value, 10);
	itoa(xr, r.value, 10);
	return xl > xr;
}
bool operator>=(const Number& l, const Number& r)
{
	return (l > r || l == r);
}

bool operator<(const Number& l, const Number& r)
{
	int xl, xr;
	itoa(xl, l.value, 10);
	itoa(xr, r.value, 10);
	return xl < xr;
}

bool operator<=(const Number& l, const Number& r)
{
	return (l < r || l == r);
}


