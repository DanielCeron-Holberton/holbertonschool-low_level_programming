#include "main.h"

/**
 * _strchr - Returns pointer on first ocurrence 
 * @s: source string
 * @c: constant character to compare
 * Return: return pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
    int i = 0;
    char *p;

    while (s[i])
    {
        if (s[i] == c)
        {
            p = &s[i];
            return (p);
        }
        i++;
    }
    return (0);
}
