#include <iostream>
#include "NumberList.h"

int main()
{
    NumberList list;
    list.Init();
    for (int i = 0; i <= 11; ++i)
    {
        if (list.Add(i) == false)
            break;
    }
    list.Sort();
    list.Print();
    return 0;
}

