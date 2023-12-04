#include "lists.h"

int recursive(listint_t **head, listint_t *tail);

/**
 * is_palindrome - This function determines whether a single linked list contained 
 * data(n) which stores an integers, forms a palindrome. Such as. 1, 3, 3, 1 is a
 * palindrome. 1, 3, 4 is not.
 *
 * @head: it is a double pointer to the head of the linked list.
 *
 * Return: if the single linked list forms a palidrome of integers 1 will return. 0 if
 * otherwise.
 */
int is_palindrome(listint_t **head)
{
	listint_t *front;

	if (head == NULL || *head == NULL)
		return (1);

	front = *head;
	return (recursive(&front, *head));
}

/**
 * recursive - recursive helper function in which head begins at the start of
 * the singly linked list and tail begins at the center. Base case is when tail
 * reaches the end of the linked list and we begin checking the first and last
 * nodes, having *head slowly work towards the end of the linked list. There is
 * overlap when performing checks. Runtime at 2n..
 *
 * @head: the double pointer to the head, needs to be able to change as call stacks
 * are popped.
 * @tail: Pointer to the center of the singly linked list during first call.
 *
 * Return: 1 if the singly linked list is a palindrome, 0 otherwise.
 */
int recursive(listint_t **head, listint_t *tail)
{

	if (tail->next)
	{
		if (recursive(head, tail->next) == 0)
			return (0);
	}
	if ((*head)->n != tail->n)
	{
		return (0);
	}
	else
	{
		*head = (*head)->next;
		return (1);
	}
}
