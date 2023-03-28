#include <stdio.h>
#include "main.h"
#define NAME "smail"
/**
   * _strlen - returns the length of a string
    * @s: string
     * Return: length
 	*/

static int len = 0;

int _strlen(char *s)
{

	while (*s++)
		len++;
		
	return (len);
}
int main(void)
{
	printf("%d\n",_strlen(NAME));
	printf("%d\n",_strlen("lol"));
	return (0);
}
