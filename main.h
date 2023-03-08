#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>

#define MAX_WORD 20
#define MAX_LINES 500
#define MAX_LINE_LENGTH 255

char *concatenate(const char *a, const char *b, const char *c);
char *get_nouns(void);
char *get_verbs(void);
int true_or_false(char *n);

#endif /* MAIN_H*/
