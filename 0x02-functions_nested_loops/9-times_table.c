#include "holberton.h"
/**
 * times_table - Print tables until 9
 */
void times_table(void)
{
int i;
int multipleD = 0;
int positionD = 0;
for (i = 0; i < 90; i++)
{
if (((multipleD * positionD) / 10) == 0)
{
putchar(((multipleD * positionD) % 10) + '0');
}
else
{
putchar(((multipleD * positionD) / 10) + '0');
putchar(((multipleD * positionD) % 10) + '0');
}
if (positionD < 9 && ((multipleD * positionD) / 10) == 0)
{
putchar(',');
putchar(32);
putchar(32);
}
else if
(positionD < 9)
{
putchar(',');
putchar(32);
}
positionD++;
if (positionD == 10)
{
positionD = 0;
multipleD++;
putchar(10);
}
}
}
