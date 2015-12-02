/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	struct node *temp;
	int index;
	if (K<=1||head==NULL)
	return NULL;
	for (index = 1, temp = head; temp->next!= NULL; temp = temp->next, index++)
	{
		if ((index + 1) % K == 0)
		{
			temp->next = (temp->next)->next;
			++index;
			if (temp->next == NULL)
				break;
		}
	}
	return head;
}