#include <stdio.h>
#include "main.h"

/**
<<<<<<< HEAD
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
int a, b, c;
int largest;

a = 972;
b = -98;
c = 0;

largest = largest_number(a, b, c);

printf("%d is the largest number\n", largest);

return (0);
}
=======
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0) && (year % 400 == 0 || year % 100 != 0))
	{
		if (month >= 3 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}

>>>>>>> 8961cf82e459e66050ac0ab6e2c50c08ac218716
