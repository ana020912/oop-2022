#include <string.h>
#include "student.h"
#include "globalFunc.h"

int compName(Student s1, Student s2)
{
	if (strcmp(s1.getName(), s2.getName()) > 0)
		return 1;
	else if (strcmp(s1.getName(), s2.getName()) == 0)
			return 0;
		return -1;
}

int compMath(Student s1, Student s2)
{
	if (s1.getMath() > s2.getMath())
		return 1;
	else if (s1.getMath() == s2.getMath())
		return 0;
	return -1;
}

int compEnglish(Student s1, Student s2)
{
	if (s1.getEnglish() > s2.getEnglish())
		return 1;
	else if (s1.getEnglish() == s2.getEnglish())
		return 0;
	return -1;
}

int compHistory(Student s1, Student s2)
{
	if (s1.getHistory() > s2.getHistory())
		return 1;
	else if (s1.getHistory() == s2.getHistory())
		return 0;
	return -1;
}

int compAverage(Student s1, Student s2)
{
	if (s1.average() > s2.average())
		return 1;
	else if (s1.average() == s2.average())
		return 0;
	return -1;
}

int compStud(Student s1, Student s2)
{
	if (compName(s1, s2) > 0)
		return 1;
	else if (compName(s1, s2) < 0)
		return -1;
	else
	{
		if (compMath(s1, s2) > 0)
			return 1;
		else if (compMath(s1, s2) < 0)
			return -1;
		else
		{
			if (compEnglish(s1, s2) > 0)
				return 1;
			else if (compEnglish(s1, s2) < 0)
				return -1;
			else
			{
				if (compHistory(s1, s2) > 0)
					return 1;
				else if (compHistory(s1, s2) < 0)
					return -1;
				else
				{
					if (compAverage(s1, s2) > 0)
						return 1;
					else if (compAverage(s1, s2) < 0)
						return -1;
					return 0;
				}
			}
		}
	}
}

