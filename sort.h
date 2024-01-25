#ifndef SORT_H
#define SORT_H

#define UP 0
#define DOWN 1

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}

/**
 * enum bool - Enumeration of the boolean values.
 * @false: Equals to 0.
 * @true: Equals to 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void esc_ints(int *x, int *y);
void bubble_sort(int *array, size_t size);
void esc_nodes(listint_t **h, listint_t **node1, listint_t *node2);
void insertion_sort_list(listint_t **list);

#endif /*SORT_H*/
