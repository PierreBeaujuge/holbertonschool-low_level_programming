#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @old_size: size of the memory space to allocate in bytes
 * @new_size: size of type
 * Return: void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (ptr == NULL)
		return (NULL);
	if (old_size == 0)
		return (NULL);
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return(NULL);
	}
	if (new_size > old_size)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		_memcpy(newptr, ptr, old_size);
		free(ptr);
	}
	return (newptr);
}

#include "holberton.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area
 *
 * @dest: parameter defined in main, pointer to memory area (dest)
 * @src: parameter defined in main, pointer to another memory area (src)
 * @n: parameter defined in main, number of bytes to be copied from src
 *
 * Return: memory address of function (memory area)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;
        char *tmp = dest;

        for (i = 0; i < n; i++)
        {
                *dest = *src;
                dest++;
                src++;
        }
        dest = tmp;
        return (dest);
}
