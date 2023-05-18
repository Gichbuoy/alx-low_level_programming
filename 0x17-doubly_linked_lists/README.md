### Doubly linked lists

- A doubly linked list is a type of data structure that consists of a sequence of elements called nodes. Each node contains two pointers, one pointing to the previous node in the sequence and the other pointing to the next node. This allows for traversal in both directions, hence the term "doubly linked."

- first node is called head node, last is called tail node.

- The head node's previous pointer is typically null, indicating the start of the list, and the tail node's next pointer is also null, indicating the end of the list.

- The advantage of a doubly linked list over a singly linked list is that it enables efficient traversal in both forward and backward directions. This allows for operations such as insertion and deletion of nodes at both ends of the list to be performed more efficiently compared to a singly linked list.

#eg:
	struct node {
		int data;
		node* next;
		node* prev;
		}
