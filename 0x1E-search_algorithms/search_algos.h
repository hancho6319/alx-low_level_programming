#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>

/**
 * struct listint_s - Singly linked list node structure.
 *
 * @n: Integer stored at the node.
 * @index: Index of the node in the list.
 * @next: Pointer to the next node.
 *
 * Description:
 * This structure defines a node for a singly linked list. It contains an
 * integer value, an index indicating its position in the list, and a
 * pointer to the next node in the list.
 */
typedef struct listint_s
{
    int n;               /* Integer stored at the node. */
    size_t index;        /* Index of the node in the list. */
    struct listint_s *next; /* Pointer to the next node. */
} listint_t;

/* These are the func prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
