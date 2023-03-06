#include "main.h"

/**
 * random_index - pics a random index for list of words
 * @upper: the highest number of words in list
 * Return: random number
*/

int random_index(int upper)
{
    int num;

    num = rand() % (upper + 1);

    return (num);
}

int main ()
{
    int i;
    char *j[20] = { "joy", "Jane", "jump", "boy", "Crane"};

    i = random_index(6);

    printf("%d\n", i);
}
