#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_LENGTH 20

char *get_verbs()
{
    FILE *filePointer;
    char buffer[MAX_LENGTH];
    char **strings = NULL;
    int numStrings = 0;
    int stringsize = 0;
    int len;

    // Open the file in read mode
    filePointer = fopen("rverbs.txt", "r");

    // Check if file was opened successfully
    if (filePointer == NULL)
    {
        printf("File could not be opened.\n");
    }

    // Read the strings from the file
    while (fgets(buffer, MAX_LENGTH, filePointer))
    {
        len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n')
        {
            buffer[len - 1] = '\0';
        }
        if (numStrings >= stringsize)
        {
            stringsize += 10;
            char **new_strings = realloc(strings, sizeof(char *) * stringsize);
            if (new_strings == NULL)
            {
                printf("Error: failed to allocate memory for strings.\n");
                exit(EXIT_FAILURE);
            }
            strings = new_strings;
        }
        strings[numStrings] = malloc(strlen(buffer) + 1);
        if (strings[numStrings] == NULL)
        {
            printf("Error: failed to allocate memory for string.\n");
            exit(EXIT_FAILURE);
        }
        strcpy(strings[numStrings], buffer);
        numStrings++;
    }

    // Close the file
    fclose(filePointer);

    // Seed the random number generator
    srand(time(NULL));

    // Pick a random string from the array
    int index = rand() % numStrings;

    // Allocate memory for the selected string
    char *selectedString = malloc(strlen(strings[index]) + 1);
    if (selectedString == NULL)
    {
        printf("Error: failed to allocate memory for selected string.\n");
        exit(EXIT_FAILURE);
    }

    // Copy the selected string into the allocated memory
    strcpy(selectedString, strings[index]);

    // Free memory used by the strings
    for (int i = 0; i < numStrings; i++)
    {
        free(strings[i]);
    }
    free(strings);

    return selectedString;
}
