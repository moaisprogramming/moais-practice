#include "list2.h"
#include <stdio.h>

void main() {
	Node* abc;
	List* qwe;
	qwe = create_list();
	add(qwe, 6);
	add(qwe, 3);
	add(qwe, 7);
	add(qwe, 9);
	printList(qwe);
	abc = findElement(qwe, 9);
	printNodesBackward(abc);
	insert(qwe, 0, 2);
	insert(qwe, 2, 2);
	insert(qwe, 6, 2);
	printList(qwe);
	printf("sizee %d", sizee(qwe));
}