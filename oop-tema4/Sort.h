#pragma once
class Sort
{
	int number;
	int *arr;
public:
	
	Sort(int count, int min, int max);
	Sort() : number(5){}   //?
	Sort(int *vect, int nr);
	Sort(int count, ...);
	Sort(const char* string);
	void InsertSort(bool ascendent = false);
	void QuickSort(bool ascendent = false); //?
	void BubbleSort(bool ascendent = false);
	void Print();
	int GetElementsCount();
	int GetElementFromIndex(int index);

	~Sort() {
		delete[] arr;
	}
};