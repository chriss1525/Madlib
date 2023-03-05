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
	char i;

	char intro[100] = "****Write a simple English sentense****";

	printf("%s\n", intro);
	printf("**type any noun**\n");
	scanf("%s", subject);
	printf("**randomise word?y/n**\n");
	scanf("%c", i);
	if (i == 'y')
	{
		verb = get_verbs();
	}
	else
	{
		printf("**type any verb**");
		scanf("%s", verb);
	}
	printf("**randomise object?y/n**\n");
	scanf("%c", i);
	if (i == 'y')
	{
		subject = get_nouns();
	}
	else
	{
		printf("**type any noun**");
		scanf("%s", verb);
	}

	simple_sentence = concatenate(subject, verb, object);

	printf("%s", simple_sentence);
}
