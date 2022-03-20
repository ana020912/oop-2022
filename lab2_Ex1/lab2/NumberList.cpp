#include <iostream>
#include "NumberList.h"

void NumberList::Init() {
     count = 0;
}

bool NumberList::Add(int x) {
    
    if (count >= 10)
        return false;
    numbers[count++] = x;
    return true;
}

void NumberList:: Sort() {
    bool ok;
    do {
        ok = true;
        for (int i = 0; i < count - 1; ++i)
        {
            if (numbers[i] > numbers[i + 1])
            {
                int aux = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = aux;
                ok = false;
            }
        }
    } while (!ok);
}

void NumberList::Print() {
    for (int i = 0; i <= 9; ++i)
    {
        std::cout << numbers[i] << ' ';
    }
}