#include "main.h"
/**
 *
 */

#define MAX_WORD 100
#define NUM_WORDS 50

int get_nouns(void)
{
    char randwords[NUM_WORDS][MAX_WORD];
    FILE *nouns;
    char word[MAX_WORD];
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

        /*srand((unsigned)time(NULL));*/
        for (c = 0; c < NUM_WORDS; c++)
        {
            rewind(nouns);
            int sel = rand() % c + 1;
            for (j = 0; j < sel; j++)
            {
                if (fgets(word, sizeof word, nouns) == NULL)
                {
                    perror("Error in fgets()");
                }
            }
        }
    }
    return (j);
}
