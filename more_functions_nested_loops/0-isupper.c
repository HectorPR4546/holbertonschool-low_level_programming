#include "main.h"
#include <ctype.h>
/**
*_isupper - entry point
*@c: variable
*Return: 0 (success)
*/
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	return (0);
}
