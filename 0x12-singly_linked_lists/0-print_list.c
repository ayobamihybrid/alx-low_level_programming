#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0; // Initialize the counter for the number of nodes

	// Loop through the linked list until h becomes NULL (end of the list)
	while (h)
	{
		// Check if the string is NULL (empty)
		if (!h->str)
			printf("[0] (nil)\n"); // Print "nil" for an empty string
		else
			printf("[%u] %s\n", h->len, h->str); // Print the string with its length

		h = h->next; // Move to the next node in the linked list
		s++; // Increment the counter for the number of nodes printed
	}

	return (s); // Return the total number of nodes printed
}
