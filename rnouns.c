#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define MAX_LENGTH 20

char *get_nouns()
{
    FILE *filePointer;
    char buffer[MAX_LENGTH];
    char *strings[MAX_LENGTH];
    int numStrings = 0;

    // Open the file in read mode
    filePointer = fopen("rnouns.txt", "r");

    // Check if file was opened successfully
    if (filePointer == NULL)
    {
        printf("File could not be opened.\n");
    }

    // Read the strings from the file
    while (fgets(buffer, MAX_LENGTH, filePointer))
    {
        strings[numStrings] = malloc(strlen(buffer) + 1);
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

    // Copy the selected string into the allocated memory
    strcpy(selectedString, strings[index]);

    // Free memory used by the strings
    for (int i = 0; i < numStrings; i++)
    {
        free(strings[i]);
    }

    return selectedString;
    free(selectedString);
}
