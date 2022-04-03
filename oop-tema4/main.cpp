#include <iostream>
#include "Sort.h"

int main()
{
	bool ascendent = false;
	int* vect = new int[5]{ 1,5,2,4,3 };
	const char* string = "0,40,100,5,70";
	Sort s1(5, 10, 20);
	Sort s3(vect, 5);
	Sort s4(6, 1, 6, 3, 5, 4, 2);
	Sort s5(string);

	s3.InsertSort(ascendent);
	s4.BubbleSort(ascendent);
	s5.QuickSort(ascendent);

	s3.Print();
	s4.Print();
	s5.Print();
	delete[] vect;
}