#include "main.h"
#include "stdlib.h"

/**
 *  * string_nconcat - concatenates n bytes of s2 to s1 in new mem block.
 *   * @s1: first string.
 *    * @s2: second string.
 *     * @n: number of bytes to be copied from s2.
 *      *
 *       * Return: pointer to location of new string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, bytes, i, j;
	char *dest;

	bytes = n;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2]; l2++)
		;

	if (bytes >= l2)
	{
		bytes = l2;
		dest = malloc((l1 + l2 + 1) * sizeof(char));
	}
	else
	{
		dest = malloc((l1 + bytes + 1) * sizeof(char));
	}

	if (dest == 0)
		return (0);

	for (i = 0; i < l1; i++)
		dest[i] = s1[i];

	for (j = 0; j < bytes; j++)
	{
		dest[l1 + j] = s2[j];
	}
	dest[l1 + bytes] = '\0';

	return (dest);
}
