#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string parameter input
 * Description: this will return the length of a string
 * return: 0 is success
*/

int _strlen(char *s)
{
	int counter =0;

	for (; *s != '\0'; s++)
		counter++;

	return (counter);
}
