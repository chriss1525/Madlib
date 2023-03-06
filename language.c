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
	char *subject = malloc(sizeof(MAX_WORD));
	char *verb = malloc(sizeof(MAX_WORD));
	char *object = malloc(sizeof(MAX_WORD));
	char *simple_sentence;
	int i = 'y';

	char *intro = "****Write a simple English sentence****";

	printf("%s\n", intro);
	printf("**type any noun**\n");
	scanf("%s", subject);
	printf("**randomize word? (y/n)**\n");
	scanf("%d", &i);
	if (i)
	{
		verb = get_verbs();
		printf("%s", verb);
	}
	else
	{
		printf("**type any verb**\n");
		scanf("%s", verb);
	}
	printf("**randomise object?y/n**\n");
	scanf("%d", &i);

	if (i)
	{
		object = get_nouns();
		printf("%s", object);
	}
	else
	{
		printf("**type any noun**\n");
		scanf("%s", object);
	}

	simple_sentence = concatenate(subject, verb, object);

	printf("%s\n", simple_sentence);
}
