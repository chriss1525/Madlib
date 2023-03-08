#include <stdio.h>
#include "main.h"
/**
 * true_or_false - checks if a string is true or false/yes or no
 * @n: string input
 * Return: (0)False and (1) true
*/

int true_or_false(char *n)
{
	int ToF;

	if (strcmp(n, "yes") == 0)
	{
		ToF = 1;
	}
	else if (strcmp(n, "no") == 0)
	{
		ToF = 0;
	}
	else
	{
		printf("Invalid input.\n");
	}

	return (ToF);
}
