/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
		int count0, count1;
	struct node *temp;
	for (temp = head,count0=count1=0; temp != NULL; temp = temp->next)
	{
		if (temp->data == 0)
			count0++;
		if (temp->data == 1)
			count1++;
	}
	for (temp = head; count0 > 0; temp = temp->next, count0--)
		temp->data = 0;
	for (; count1 > 0; temp = temp->next, count1--)
		temp->data = 1;
	for (; temp != NULL; temp = temp->next)
		temp->data = 2;
	
}