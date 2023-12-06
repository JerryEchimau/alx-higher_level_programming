#include "lists.h"

/**
 * reverse - reverses a single-linked listint_t list
 * @head_ref: a pointer to the starting node of the list to be reversed
 *
 */
void reverse(listint_t **head_ref)
{
	listint_t *current = *head_ref, *next, *prev = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head_ref = prev;
}

/**
 * compare_list - checks if two inputs have the same data
 * @head1: head of the first input
 * @head2: head of the second input
 *
 * Return: 1 if same, 0 if not
 */
int compare_list(listint_t *head1, listint_t *head2)
{
	listint_t *temp1 = head1;
	listint_t *temp2 = head2;

	while (temp1 && temp2)
	{
		if (temp1->n == temp2->n)
		{
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		else
			return (0);
	}

	if (temp1 == NULL && temp2 == NULL)
		return (1);
	return (0);
}

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to rhe head of the list
 *
 * Return: 1 if palindorme, 0 if not
 */
int is_palindrome(listint_t **head)
{
	listint_t *fast = *head, *slow = *head, *prev_slow = *head;
	listint_t *midnode = NULL; /* for odd size list */
	listint_t *second_half = NULL;
	int result = 1; /*return result */

	if (*head != NULL && (*head)->next != NULL)
	{
		while (fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next; /* move twice as fast */
			prev_slow = slow; /* for odd size list */
			slow = slow->next;
		}

		/* if fast is NULL, then the list is even, skip the middle node */
		if (fast != NULL)
		{
			midnode = slow; /* store here first */
			slow = slow->next; /* slow becomes the next one */
		}

		/* reverse the second half */
		second_half = slow;
		prev_slow->next = NULL; /* null terminate the first half */
		reverse(&second_half); /*reversing the seconf half */
		result = compare_list(*head, second_half); /* compare */

		/* reconstruct original list */
		reverse(&second_half); /* back to original */
		if (midnode != NULL) /* if there was a mid node */
		{
			prev_slow->next = midnode;
			midnode->next = second_half;
		}
		else /* otherwise, just connect first half and seconf half */
			prev_slow->next = second_half;
	}
	return (result);
}
