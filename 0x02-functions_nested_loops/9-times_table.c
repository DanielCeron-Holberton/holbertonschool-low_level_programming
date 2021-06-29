#include "holberton.h"
/**
 * times_table - Print tables until 9
 */
void times_table(void)
{
int counter = 0;
int multipleDigit = 0;
int positionDigit = 0;
int resultDigit1;
int resultDigit2;
while (counter < 90)
{
resultDigit1 = (multipleDigit * positionDigit) / 10;
resultDigit2 = (multipleDigit * positionDigit) % 10;
if (resultDigit1 == 0)
{
_putchar(resultDigit2 + '0');
}
else
{
_putchar(resultDigit1 + '0');
_putchar(resultDigit2 + '0');
}
if (positionDigit < 9)
{
_putchar(',');
_putchar(' ');
}
positionDigit++;
counter++;
if (positionDigit == 10)
{
positionDigit = 0;
multipleDigit++;
_putchar(10);
}
}
}
