#include "student.h"
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void Student::setName(const char* n)
{
	name = n;
}

const char* Student::getName()
{
	return name;
}

void Student::setMath(float g)
{
	mathGrade = g;
}

float Student::getMath()
{
	if (mathGrade >= 1 && mathGrade <= 10)
		return mathGrade;
}

void Student::setEnglish(float g)
{
	englishGrade = g;
}

float Student::getEnglish()
{
	if (englishGrade >= 1 && englishGrade <= 10)
		return englishGrade;
}

void Student::setHistory(float g)
{
	historyGrade = g;
}

float Student::getHistory()
{
	if (historyGrade >= 1 && historyGrade <= 10)
		return historyGrade;
}

float Student::average()
{
	return (mathGrade + englishGrade + historyGrade) / 3;
}
