#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 *
 * Return: Always success
 */
int main(void)
{
	int dg1, dg2;

	for (dg1 = 0; dg1 < 9; dg1++)
	{
		for (dg2 = dg1 + 1; dg2 < 10; dg2++)

		{
			putchar((dg1 % 10) + '0');
			putchar((dg2 % 10) + '0');

	if (dg1 == 8 && dg2 == 9)

		continue;
	putchar(',');
	putchar(' ');

		}
	}

	putchar('\n');

	return (0);
}
