#include "main.h"
/**
 *
 */

#define MAX_WORD 100


int get_nouns(void)
{
    FILE *nouns;
    char word[MAX_WORD];
    char randword[MAX_WORD];
    long i = 0;
    long j;
    size_t c;

    nouns = fopen("rnouns.txt", "r");

    if (nouns == NULL)
    {
        perror("Unable to locate word list");
        exit(EXIT_FAILURE);

        /*count number of words*/
        while (fgets(word, sizeof word, nouns) != NULL)
        {
            ++i;
        }

        /*get random words from list*/
       while (word < i)
       {
        
       }
    }
    return (j);
}
