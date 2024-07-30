#ifndef MY_LIST
#define MY_LIST
#include <stddef.h>

struct dlistint_s
{
	struct dlistint_s *prev;
	char *str;
	unsigned int len;
	struct dlistint_s *next;
};

typedef struct dlistint_s dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
