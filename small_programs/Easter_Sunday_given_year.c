/* The day of the month in which Easter Sunday in a given year falls,
 is given by the first Sunday after the first full moon after the
 March equinox. The following calculations gives the day for a given year
 */
#include <stdio.h>

void main()
{
    int year, a, b, c, d, e, r;
    printf("Write a year:");
    scanf("%d",&year);

    a = year % 19;
    b = year % 4;
    c = year % 7;
    d = (19*a + 24) % 30;
    e = (2*b + 4*c + 6*d + 5) % 7;

    r = 22 + d + e;
    r <= 31 ? printf("The Easter Sunday in year %d is March %d.\n",year,r) : printf("The Easter Sunday in year %d is April %d.\n",year,r%31);
}
