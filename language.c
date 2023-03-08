#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD 20

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
	char *tempverb = NULL;
	char *tempobject = NULL;
	char *random = malloc(sizeof(MAX_WORD));
	char *temp_verb = NULL;
	char *temp_object = NULL;

	char *intro = "****Write a simple English sentence****";

	printf("%s\n", intro);
	printf("**type any noun**\n");
	scanf("%s", subject);
	printf("**randomize word? (yes/no)**\n");
	scanf("%s", random);
	int rchoice = true_or_false(random);

	if (rchoice == 1)
	{
		temp_verb = get_verbs();
		printf("%s", temp_verb);
	}
	else
	{
		printf("**type any verb**\n");
		scanf("%s", verb);
	}

	printf("**randomise object?yes/no**\n");
	scanf("%s", random);

	if (rchoice == 1)
	{
		temp_object = get_nouns();
		printf("%s", temp_object);
	}
	else
	{
		printf("**type any noun**\n");
		scanf("%s", object);
	}

	if (temp_verb != NULL)
	{
		strcpy(verb, temp_verb);
		free(temp_verb);
	}

	if (temp_object != NULL)
	{
		strcpy(object, temp_object);
		free(temp_object);
	}

	simple_sentence = concatenate(subject, verb, object);

	printf("%s\n", simple_sentence);
}
