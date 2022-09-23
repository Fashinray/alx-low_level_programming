#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	char s1[98] = "hello ";
	char s2[] = "world!\n";
	char *p;

	printf("%s\n", s1);
	printf("%s", s2);
	p = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", p);

	return (0);
}
