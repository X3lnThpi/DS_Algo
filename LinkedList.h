#pragma once

struct Node
{
	Node* next;
	int data;
};

//Create Linked List
Node CreateLinkedList();
void Insert(Node* node, int data);

//A node can be added at the front , after a given node & at the end of the linked list
//The new node is always added before the head of LL
void Push(Node** head_ref, int data);
//Add a node after a given node
void InsertAfter(Node* prevNode, int newData);
//Print List
void PrintList(Node* node);
//Add data at the end of the node
void Append(Node** head_ref, int newData);