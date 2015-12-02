/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
		struct node *start, *newnode;
	start = (struct node *)malloc(sizeof(struct node));
	start->next = NULL;
	if (N == 0)
		start->num = 0;
	else
	{
		if (N<0)
			N *= -1;
		for (start=NULL; N > 0; N /= 10)
		{
			if (start == NULL)
			{
				start = (struct node *)malloc(sizeof(struct node));
				start->num = N % 10;
				start->next = NULL;
			}
			else
			{
				newnode->num = N % 10;
				newnode->next = start;
				start = newnode;
			}
			newnode = (struct node *)malloc(sizeof(struct node));
		}
	}
		return start;

}