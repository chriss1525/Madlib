#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * madlib - takes in prompts and prints them on the terminal
 * Return: returns nothing
 */

int main(void)
{
	char subject[20];
	char verb[20];
	char object[20];
	char *simple_sentence;

	char intro[100] = "****Write a simple English sentense****";

	printf("%s\n", intro);
	printf("**type any noun**\n");
	scanf("%s", subject);
	printf("**type any verb**\n");
	scanf("%s", verb);
	printf("**type any noun**\n");
	scanf("%s", object);

	simple_sentence = concatenate(subject, verb, object);

	printf("%s", simple_sentence);
}
