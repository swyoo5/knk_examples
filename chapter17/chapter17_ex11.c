/*
Write the following function:
int count_occurrences(struct node *list, int n);
The list parameter points to a linked list; the function should return the number of times that n apperas in this list. Assume that the node structure is the one defined in Section 17.5.
*/

int count_occurrences(struct node *list, int n)
{
	int count = 0;
	struct node *cur;
	for (cur = list; cur != NULL; cur = cur->next){ 
		if (list->value == n){
			count++;
		}
	}

	return count;
}
