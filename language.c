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
	char *i;

	char *intro = "****Write a simple English sentence****";

	printf("%s\n", intro);
	printf("**type any noun**\n");
	scanf("%s", subject);
	printf("**randomise word? (yes/no)**\n");
	scanf("%s", i);
	if (i == "yes")
	{
		verb = get_verbs();
	}
	/*else
	{
		printf("**type any verb**\n");
		scanf("%s", verb);
	}*/
	printf("**randomise object?y/n**\n");
	scanf("%s", i);

	if (i == "yes")
	{
		object = get_nouns();
	}
	/*else
	{
		printf("**type any noun**\n");
		scanf("%s", object);
	}*/

	simple_sentence = concatenate(subject, verb, object);

	printf("%s\n", simple_sentence);
}
