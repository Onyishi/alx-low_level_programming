#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  _realloc -  reallocates a memory block using malloc and free
 *  @ptr: pointer
 *  @old_size: old size
 *  @new_size: new size
 *  Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	;
	return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
