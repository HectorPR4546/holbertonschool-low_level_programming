#include "main.h"
#include <string.h>
/**
 * rev_string - main entry
 * @s: variable
 * Return 0 (success)
 */
void rev_string(char *s)
{
	char temp;
	int len1, len2, idx;

	for (len1 = 0; s[len1] != '\0'; len1++)
		;

	len2 = len1 - 1;

	for (idx = 0; idx < len1 / 2; idx++)
	{
		temp = s[idx];
		s[idx] = s[len2];
		s[len2--] = temp;
	}
}
