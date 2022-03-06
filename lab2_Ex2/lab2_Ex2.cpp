#include <iostream>
#include "student.h"
#include "globalFunc.h"

Student S1, S2;
void init()
{
    S1.setName("John");
    S1.setMath(5);
    S1.setEnglish(9.5f);
    S1.setHistory(8.5f);

    S2.setName("Kevin");
    S2.setMath(7.5);
    S2.setEnglish(9.5f);
    S2.setHistory(8);

}

int main()
{
    init();
    std::cout << compStud(S1, S2);
    return 0;
}
