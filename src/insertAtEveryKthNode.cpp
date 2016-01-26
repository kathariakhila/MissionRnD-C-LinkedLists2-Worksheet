/*
OVERVIEW: Given a single linked list insert a new node at every Kth node with value K.
E.g.: 1->2->3->4->5, k = 2, 1->2->2->3->4->2->5

INPUTS: A linked list and Value of K.

OUTPUT: Insert a new node at every Kth node with value K.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * createNode(int n1) {
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	newNode->num = n1;
	newNode->next = NULL;
	return newNode;
}

struct node * insertAtEveryKthNode(struct node *head, int K) {
	
	if (head == NULL)
		return NULL;

	else{
		int addcount = 0;
		int index = 1;
		int next = K;
		struct node *curr;
		struct node *newNode;

		curr = (struct node *)malloc(sizeof(struct node));
		curr = head;


		if (head == NULL)
			return NULL;

		if (K <= 0)
			return NULL;


		else{
			while (curr != NULL){


				if (index == next ){
					newNode = createNode(K);
					newNode->next = curr->next;
					curr->next = newNode;
					addcount++;
					next = next + K + 1;

				}
				index++;
				curr = curr->next;

			}


			return head;

		}

	}
}


