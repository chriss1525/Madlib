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
	char *input = malloc(sizeof(MAX_WORD));

	printf("**There are several ways to write a sentence in the English Language**\n");
	sleep(1);
	printf("**The simplest of these is the SVO method where you only require three parts:**\n");
	sleep(1);
	printf("***The subject, often a noun but can be replaced with a pronoun or a subject clause***\n");
	sleep(1);
	printf("****the verb, often an action like make or break but can also be replaced by a verb clause****\n");
	sleep(1);
	printf("*****the object, where the action is directed. Can be replaced by an object clause*****\n");
	sleep(1);
	printf("LETS MAKE AN SVO SENTENCE\n");
	sleep(1);
	while (1)
	{
		printf("Type 'exit' or 'stop' to quit the program.\n");
		printf("type any noun\n");
		scanf("%s", input);
		if (strcmp(input, "exit") == 0 || strcmp(input, "stop") == 0)
		{
			break;
		}

		strcpy(subject, input);

		printf("pick random verb? (yes/no)\n");
		scanf("%s", random);
		int rchoice = true_or_false(random);

		if (rchoice == 1)
		{
			temp_verb = get_verbs();
			printf("%s", temp_verb);
			printf("\n");
		}
		else
		{
			printf("type any verb\n");
			scanf("%s", verb);
		}

		printf("pick random noun?yes/no\n");
		scanf("%s", random);
		rchoice = true_or_false(random);

		if (rchoice == 1)
		{
			temp_object = get_nouns();
			printf("%s", temp_object);
			printf("\n");
		}
		else
		{
			printf("type any noun\n");
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
		printf("*** congratulations! You did it! ***\n");

		/*printf("Do you want to exit: ");
		scanf("%s", input);*/
	}
	printf("*** Program ended ***\n");
	free(simple_sentence);
	return (0);
}
