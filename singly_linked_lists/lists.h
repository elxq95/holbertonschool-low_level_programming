#ifndef MY_HEADER
#define MY_HEADER
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
};

/**
 * list_t - Typedef for struct list_s
 */

typedef struct list_s list_t;

size_t print_list(const list_t *h);
#endif
