#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*3*/
int main()
{
    char s[256], *p, cuv[256][256], aux[256];
    int k = 0;
    bool ok;
    scanf("%[^\n]s", s);
    p = strtok(s, " ");
    while (p)
    {
        strcpy(cuv[++k], p);
        p = strtok(NULL, " ");
    }
    do
    {
        ok = true;
        for (int i = 1; i < k; ++i)
        {
            if ( (strlen(cuv[i]) < strlen(cuv[i + 1])) || ( (strlen(cuv[i]) == strlen(cuv[i + 1])) && strcmp(cuv[i], cuv[i+1]) > 0))
            {
                    strcpy(aux, cuv[i]);
                    strcpy(cuv[i], cuv[i + 1]);
                    strcpy(cuv[i + 1], aux);
                    ok = false;
            }
        }
    }
    while (!ok);
        for (int i = 1; i <= k; ++i)
        {
            printf("%s\n", &cuv[i]);
        }
    return 0;
}

