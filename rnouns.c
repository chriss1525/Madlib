#include "main.h"
/**
 * get_nouns - gets a  random word from the list nouns
 * Return: random noun
 */

char *get_nouns(void)
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

int main (void)
{
    char *j;

    j = get_nouns();
    printf("%s\n", j);
}
