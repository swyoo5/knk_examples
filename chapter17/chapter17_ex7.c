/*
The following loop is supposed to delete all nodes from a linked list and release the memory that they occupy. Unfortunately, the loop is incorrect. Explain what's wrong with it and show how to fix the bug.
for (p = first; p != NULL; p = p->next){
	free(p);
}
*/

// first 노드에서 free(p)가 실행되면 p가 이미 할당해제 됐으므로  p->next로 넘어갈 수 없다.
while (p != NULL){
	next_node = p->next;
	free(p);
	p = next_node;
}
