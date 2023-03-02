#include <stdio.h>
#include <stdlib.h>

/**
 * madlib - takes in prompts and prints them on the terminal
 * Return: returns nothing
 */

int main(void)
{
	char subject[20];
	char verb[20];
	char object[20];
	char article[5];

	char intro[100] = "Write a simple English sentense";

	printf("%s\n", intro);

	/*get the subject of the sentence*/
	printf("**type any noun**\n");

	scanf("%s", subject);

	/*get the verb or action*/
	printf("**now type an action**\n");
	scanf("%s", verb);

	/*get the article and subject of the sentence*/
	printf("**now type who/where the action is targeted\n");
	scanf("%s", article);
	scanf("%s", object);

	printf("%s %s %s %s\n", subject, verb, article, object);
}
