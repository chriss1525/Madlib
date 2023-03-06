#include <stdlib.h>
#include <string.h>

/**
 * concatenate - three strings
 * @a: first string
 * @b: second string
 * @c: thrid string
 * Return: pointer to new string
 */

char *concatenate(const char *a, const char *b, const char *c)
{
	size_t lena = strlen(a);
	size_t lenb = strlen(b);
	size_t lenc = strlen(c);
	char *sentence = malloc(lena + lenb + lenc + 3);

	if (sentence)
	{
		memcpy(sentence, a, lena);
		memcpy(sentence + lena++, " ", sizeof(char));
		memcpy(sentence + lena, b, lenb);
		memcpy(sentence + lena + lenb++, " ", sizeof(char));
		memcpy(sentence + lena + lenb, c, lenc + 1);
	}
	return sentence;
}
