#include "main.h"
/**
 * get_verbs - gets a  random word from the list verbs
 * Return: random noun
 */

#define MAX_WORD 100


char *get_verbs(void)
{
    FILE *nouns;
    char *word;
    char *nword;
    int i = 0;
    char *j;

    nouns = fopen("rnouns.txt", "r");

    if (nouns == NULL)
    {
        perror("Unable to locate word list");
        exit(EXIT_FAILURE);

        /*count number of words*/
        while (fgets(word, sizeof(word), nouns) != NULL)
        {
            ++i;
        }

        /*get random words from list*/
        i = random_index(i);
        while (i)
        {
            j = word;
            nword = fgets(j, sizeof(word), nouns);
        }
    }
    return (nword);
}
