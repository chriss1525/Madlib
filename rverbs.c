#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_LENGTH 100

char *get_verbs()
{
    FILE *filePointer;
    char buffer[MAX_LENGTH];
    char *strings[MAX_LENGTH];
    int numStrings = 0;

    // Open the file in read mode
    filePointer = fopen("rverbs.txt", "r");

    // Check if file was opened successfully
    if (filePointer == NULL)
    {
        printf("File could not be opened.\n");
        exit(1);
    }

    // Read the strings from the file
    while (fgets(buffer, MAX_LENGTH, filePointer))
    {
        strings[numStrings] = malloc(strlen(buffer) + 1);
        strcpy(strings[numStrings], buffer);
        numStrings++;
    }

    // Seed the random number generator
    srand(time(NULL));

    // Pick a random string from the array
    int index = rand() % numStrings;
    return (strings[index]);

    // Free memory used by the strings
    for (int i = 0; i < numStrings; i++)
    {
        free(strings[i]);
    }

    // Close the file
    fclose(filePointer);
}
