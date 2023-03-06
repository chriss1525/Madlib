#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_WORD 100

char *concatenate(const char *a, const char *b, const char *c);
char *get_nouns(void);
char *get_verbs(void);
int random_index(int upper);

#endif /* MAIN_H*/
