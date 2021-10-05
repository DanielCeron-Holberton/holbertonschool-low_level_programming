#include "main.h"
/**
 * times_table - Print tables until 9
 */
void times_table(void)
{
int i;
int multipleD = 0;
int positionD = 0;
for (i = 0; i < 100; i++)
{
if (((multipleD * positionD) / 10) == 0)
{
_putchar(((multipleD * positionD) % 10) + '0');
}
else
{
_putchar(((multipleD * positionD) / 10) + '0');
_putchar(((multipleD * positionD) % 10) + '0');
}
positionD++;
if (positionD < 10 && ((multipleD * positionD) / 10) == 0)
{
_putchar(',');
_putchar(32);
_putchar(32);
}
else if
(positionD < 10)
{
_putchar(',');
_putchar(32);
}
if (positionD == 10)
{
positionD = 0;
multipleD++;
_putchar(10);
}
}
}
