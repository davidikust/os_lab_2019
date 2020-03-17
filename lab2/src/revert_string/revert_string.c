#include "revert_string.h"

void RevertString(char *str)
{
    int size = 0;
    char* a = str;
	while(*a != '\0')
    {
        a++;
        size++;
    }
    char temp;
    int i = 0;
    while(i < size / 2)
    {
        temp = str[i];
        str[i] = str[size-i-1];
        str[size-i-1] = temp;
        i++;
    }
}

