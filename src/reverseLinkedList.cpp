/*
OVERVIEW: Given a single linked list, reverse the linked list.
E.g.: 1->2->3->4->5, output is 5->4->3->2->1.

INPUTS: A linked list.

OUTPUT: Reverse the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node *reverse(struct node *head){
	

	//	printf("\nInside reverse"); 
	struct node *revHead;
	

	if (head == NULL || head->next == NULL){
		return head;
	}
	

     revHead = reverse(head->next);
     head->next->next = head;
     head->next = NULL;


     return revHead;
}




struct node * reverseLinkedList(struct node *head) {
	
	if (head == NULL)
		return NULL;

	else{
		reverse(head);
	}

}
