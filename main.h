#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAX_WORD 100
#define MAX_LINES 1000
#define MAX_LINE_LENGTH 255

char *concatenate(const char *a, const char *b, const char *c);
char *get_nouns(void);
char *get_verbs(void);
int random_index(FILE *list, int upper);

#endif /* MAIN_H*/
