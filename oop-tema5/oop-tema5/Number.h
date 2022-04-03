#pragma once
class Number
{
	char* value;
	int base;
	// add data members
public:
	Number(const char* value, int base); // where base is between 2 and 16
	Number(const char& other);
	~Number();

	friend Number operator+(const Number& l, const Number& r);	
	friend Number operator-(const Number& l, const Number& r);
	friend Number& operator>(const Number& l, const Number& r);
	friend Number& operator>=(const Number& l, const Number& r);
	friend bool operator<(const Number& l, const Number& r);
	friend bool operator<=(const Number& l, const Number& r);
	friend bool operator==(const Number& l, const Number& r);
	friend bool operator!=(const Number& l, const Number& r);
	friend Number& operator--(const Number& l);
	friend Number& operator--(const Number& l, int); //postfix
	friend Number& operator+=(const Number& l, const Number& r);
	friend char operator[](int i);

	void SwitchBase(int newBase);
	void Print();
	int  GetDigitsCount(); // returns the number of digits for the current number
	int  GetBase(); // returns the current base
};

