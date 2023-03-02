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
	char intro[100] = "Write a simple English sentense";

	printf("%s\n", intro);
	printf("**type any noun or pronoun**\n");
	scanf("%s", subject);
	/*printf("%s", subject);*/
	printf("**now type an action**\n");
	scanf("%s", verb);
	/*printf("%s", verb);*/
	printf("**now type who/where the action is targeted\n");
	scanf("%s", object);
	/*printf("%s", object);*/

	printf("%s %s %s\n", subject, verb, object);
}
