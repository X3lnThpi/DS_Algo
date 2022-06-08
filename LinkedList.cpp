#include "LinkedList.h"
#include <stddef.h>
#include <iostream>

Node CreateLinkedList()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	//Allocate 2 Nodes in the Heap
	head = new Node();
	second = new Node();
	third = new Node();

	return* head;
}

void Insert(Node* node, int data)
{
	Node* x = node;

	if (x->next == NULL)
	{
		x->data = data;
		x->next = NULL;
	}

}

void Push(Node** head_ref, int data)
{
	//Allocate new node
	Node* newNode = new Node();
	//Put data 
	newNode->data = data;
	//Make next of newNode as head
	newNode->next = (*head_ref);
	//Move the head to point to new node
	*head_ref = new Node;
}

void InsertAfter(Node* prevNode, int newData)
{
	//Check if prev node is null, previous node cannot be null
	if (prevNode == NULL)
	{
		std::cout<< "the given previous node cannot be null" <<std::endl;
		return;
	}

	//Allocate new node
	Node* newNode = new Node();
	//Put the data
	newNode->data = newData;
	//Make next of newNode as next of prevNode
	newNode->next = prevNode->next;
	//Move the next of prevNode as new Node
	prevNode->next = newNode;
}

void PrintList(Node *node)
{
	while (node != NULL)
	{
		std::cout << "value is " << node->data;
		node = node->next;
	}
}

void Append(Node** head_ref, int newData)
{
	//Allocate node
	Node* newNode = new Node();
	//used in step 5
	Node* last = *head_ref;
	//put the data
	newNode->data = newData;
	//This node will be last node, so making it null
	newNode->next = NULL;
	//If the link list is empty make the new node as head
	if (*head_ref == NULL) {
		*head_ref = newNode;
		return;
	}
	//else traverse till last node
	while (last->next != NULL)
	{
		last = last->next;
	}
	//change the last of the last node
	last->next = new Node;
	return;
}