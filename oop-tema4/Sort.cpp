#include "Sort.h"
#include <iostream>
#include <cstdlib>
#include <cstdarg>
#include <cstring>
#include <algorithm>

Sort::Sort(int count, int min, int max)
{
	number = count;
	for (int i = 0; i < count; ++i) {
		arr[i] = rand() % max + min;
	}
}

Sort::Sort() : number(5) 
{
	for (int i = 0; i < number; ++i) {

	}
}

Sort::Sort(int *vect, int nr)
{
	number = nr;
	for (int i = 0; i < nr; ++i) {
		arr[i] = vect[i];
	}
}

Sort::Sort(int count, ...)
{
	number = count;
	va_list args;
	va_start(args, count);
	for (int i = 0; i < count; ++i) {
		int x = va_arg(args, int);
		arr[i] = x;
	}
	va_end(args);
}

Sort::Sort(const char* string)
{
	char* s;
	strcpy(s, string);
	number = strlen(s);
	int i = 0;
	char* p = strtok(s, ",");
	while (p != nullptr) {
		int x = atoi(p);
		arr[i++] = x;
		p = strtok(nullptr, ",");
	}
}

void Sort::InsertSort(bool ascendent = false)
{
	for (int i = 1; i < number - 1; ++i) {
		int j = i - 1;
		int current = arr[i];
		while (j >= 0 && arr[j] > current) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = current;
	}
}

int pivot()
{
	Sort s1(5, 10, 20);
	int p = s1.GetElementFromIndex(0);
	int i = 1;
	int j = s1.GetElementsCount();
	while (i < j) {
		if (s1.GetElementFromIndex(i) >= p)
			i++;

		if (s1.GetElementFromIndex(j) <= p)
			j--;

		if (i < j && s1.GetElementFromIndex(i) > p && p < s1.GetElementFromIndex(j)) {
			swap(s1.GetElementFromIndex(i), s1.GetElementFromIndex(j));
			i++;
			j--;
		}
	}
	s1.GetElementFromIndex(p) = s1.GetElementFromIndex(i - 1);
	s1.GetElementFromIndex(i) = p;
	int piv = i - 1;
	return i - 1;
}


void Sort::QuickSort(bool ascendent = false)
{
	if (l < r)
	{
		int p = pivot();
		QuickSort(l, p - 1);
		QuickSort(p + 1, r);
	}
}

void Sort::BubbleSort(bool ascendent = false)
{
	bool ok;
	do {
		ok = true;
		for (int i = 0; i < number; ++i) {
			if (arr[i] < arr[i + 1]) {
				int aux = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = aux;
				ok = false;
			}
		}
	} while (!ok);
}

void Sort::Print()
{
	for (int i = 0; i < number; ++i) {
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
}

int Sort::GetElementsCount()
{
	return number;
}

int Sort::GetElementFromIndex(int index)
{
	return arr[index];
}
