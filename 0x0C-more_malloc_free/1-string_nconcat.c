#include "main.h"
/**
 * string_nconcat - function that concatenates two strings with n bytes of the second string.
 * @n: bytes of the 2nd string
 * @s1: Entry string 1
 * @s2: Entry string 2
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int long1 = 0, long2 = 0, total = 0, con1 = 0, con2 = 0;
	char *p;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (; s1[long1] ; long1++)
		;
	for (; s2[long2] ; long2++)
		;
	if (n >= long2 + 1)
	{
		total = long1 + long2;
	}
	else
	{
		total = long1 + n;
	}
	p = malloc(sizeof(char) * total + 1);
	if (p == NULL)
		return (NULL);
	for (; s1[con1] != '\0'; con1++)
	{
		p[con1] = s1[con1];
	}
	for (; con1 <= total; con2++, con1++)
	{
		p[con1] = s2[con2];
	}
	p[total] = '\0';
	return (p);
}