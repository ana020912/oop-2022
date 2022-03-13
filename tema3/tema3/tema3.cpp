#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Math.h"

int main()
{
	Math m;
	int a, b, c;
	double x, y, z;
	const char* s1 = "Hello";
	const char* s2 = " World!";
	char *buffer;
	std::cout << "read int: "; std::cin >> a >> b >> c;
	std::cout << "read double: "; std::cin >> x >> y >> z;
	std::cin.get();
	std::cout << "add int: " << m.Add(a, b) << '\n';
	std::cout << "add double: " << m.Add(x, y) << '\n';
	std::cout << "add3 int: " << m.Add(a, b, c) << '\n';
	std::cout << "add3 double: " << m.Add(x, y, z) << '\n';
	std::cout << "mul int: " << m.Mul(a, b) << '\n';
	std::cout << "mul double: " << m.Mul(x, y) << '\n';
	std::cout << "mul3 int: " << m.Mul(a, b, c) << '\n';
	std::cout << "mul3 double: " << m.Mul(x, y, z) << '\n';
	std::cout << "add var: " << m.Add(5, 1, 2, 3, 4, 5) << '\n'; 
	buffer = m.Add(s1, s2);
	strcpy(buffer, s1);
	strcat(buffer, s2);
	std::cout <<"String concat:" << buffer;
	return 0;
}
