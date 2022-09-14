#include "main.h"
/**
 * _isalpha - functio to check if c is a letter,
 * c: is the that will for the arguement of the function
 * Return: 0
 */
int_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
	{
		return(1);
	}
	else
		return(0);
}
