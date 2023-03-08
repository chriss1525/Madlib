#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> 

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
	char *random = malloc(sizeof(MAX_WORD));
	char *temp_verb = NULL;
	char *temp_object = NULL;

	printf("**There are several ways to write a sentence in the English Language**\n");
	sleep(2);
	printf("**The simplest of these is the SVO method where you only require three parts:**\n");
	sleep(2);
	printf("***The subject, often a noun but can be replaced with a pronoun or a subject clause***\n");
	sleep(2);
	printf("****the verb, often an action like make or break but can also be replaced by a verb clause****\n");
	sleep(2);
	printf("*****the object, where the action is directed. Can be replaced by an object clause*****\n");
	sleep(2);
	printf("LETS MAKE AN SVO SENTENCE\n");
	sleep(1);
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
	rchoice = true_or_false(random);

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
	printf("*** congratulations! You did it!***\n");
	return (0);
}
