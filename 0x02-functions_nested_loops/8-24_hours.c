#include "main.h"
/**
 * jack_bauer - Print day (hours,minutes)
 *
 *
 *
 *
 *
 */

void jack_bauer(void)
{
/*Init vars*/
int minutesNum;
int hoursNum;
minutesNum = 00;
hoursNum = 00;
/*Loop to print in bucle*/
while (minutesNum <= 60 && hoursNum < 24)
{
if (minutesNum == 60)
{
minutesNum = 00;
hoursNum++;
}
if (hoursNum < 24)
{
_putchar((hoursNum / 10) + '0');
_putchar((hoursNum % 10) + '0');
_putchar(':');
_putchar((minutesNum / 10) + '0');
_putchar((minutesNum % 10) + '0');
_putchar(10);
minutesNum++;
}
}
}
