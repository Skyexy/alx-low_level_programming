#include <stdio.h>
#include <stdlib.h>

/**
<<<<<<< HEAD
 * sup - this changes array
 * @s: this is a pointer
 * @b: this is a character
 * @i: this is an integer
 * Return: s
 */
char sup(char *s, char b, unsigned int i)
=======
sup - this changes array
@s: this is a pointer
@b: this is a character
@i: this is an integer
Return: s
char *sup(char *s, char b, unsigned int i)
>>>>>>> 73b7e5efdd79f9ac028e8052a4ecf92da09ef767
{
	unsigned int p = 0;
	
	while (p < i)
	{
		s[i] = b;
		p++;
	}
	return (s);
}
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: size of memry
 * @size: number of mem in byts
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * nmemb);
	if (!ptr)
	{
		return (NULL);
	}
	sup(ptr, 0, size * nmemb);
	return (ptr);
}
