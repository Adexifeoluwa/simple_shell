91% of storage used … If you run out, you won't have enough storage to create, edit, and upload files. Get 100 GB of storage for ₦950.00 ₦240.00/month for 3 months.
#include "shell.h"

/**
 * bfree - frees a pointer and NULLs the address
 * @ptr: address of the pointer to free
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
