class Student
{
	const char* name;
	float mathGrade, englishGrade, historyGrade;
public:
	void setName(const char n[10]);
	const char* getName();

	void setMath(float g);
	float getMath();

	void setEnglish(float g);
	float getEnglish();

	void setHistory(float g);
	float getHistory();

	float average();
};