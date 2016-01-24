/*
OVERVIEW: Given a single sorted linked list find the median element of the single linked list.
Median is the middle element.
E.g.: 1->2->3->4->5, output is 3.

INPUTS: A sorted linked list.

OUTPUT: Return median of the linked list elements.

ERROR CASES: Return -1 for error cases.

NOTES: If length is even, return average of middle pair of numbers.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

int linkedListMedian(struct node *head) {

	if (head == NULL)
		return -1;
	else{
		int i = 1;
		int len = 0;
		struct node *curr = head;
		int res;

		while (curr != NULL){
			len++;
	 		curr = curr->next;
		
		}
		

	 	curr = head;
		//printf("\n%d",curr->data); 
		if (len % 2 == 1){
	 		while (i <= len / 2){
 			curr = curr->next;
 			//printf("\n%d",i); 
 			i++;
			
			}
	 		//printf("\n%d",curr->data); 
	 		return curr->num;
				
		}
		

	 	else{
	 		i = 1;
	 		while (i < len / 2){
	 		//	printf("\n%d",curr->data); 
	 			curr = curr->next;
	 			i++;
				
			}
			

	 		res = curr->num;
	 		curr = curr->next;
	 		res = res + curr->num;
	 		res = res / 2;
	 		return  res;
			
		}

	}
}
