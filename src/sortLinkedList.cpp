/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	struct node *temp, *temp1, *temp2, *temp3,*mintemp;
	if (head == NULL || head->next == NULL)
		return head;
	for (temp = head; temp->next != NULL;)
	{
		for (temp1 = temp, mintemp = temp; temp1->next != NULL; temp1 = temp1->next)
		{
			if ((temp1->next)->num < mintemp->num)
			{
				mintemp = temp1->next;
				temp2 = temp1;
			}
		}
		if (temp != mintemp)
		{
			if (temp == head)
			{
				temp2->next = (temp2->next)->next;
				mintemp->next = head;
				head = mintemp;
			}
			else
			{
				temp2->next = (temp2->next)->next;
				mintemp->next = temp3->next;
				temp3->next = mintemp;
			}
			temp3 = mintemp;
		}
		else
			temp = temp->next;
	}
	return head;
}