#ifndef MY_HEADER
#define MY_HEADER
#include <stddef.h>

struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
};

typedef struct list_s list_t;

size_t print_list(const list_t *h);
#endif
