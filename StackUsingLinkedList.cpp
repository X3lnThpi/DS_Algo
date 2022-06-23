#include "StackUsingLinkedList.h"
#include <iostream>

StackUsingLinkedList::Node* top;

void StackUsingLinkedList::Push(int data)
{
	//Create a New Node and allocate memory in heap
	Node* temp = new Node();
	//Check if Stack(heap) is full
	//then insertering an element => stack overflow

	if (!temp)
	{
		std::cout << "Stack Overflow";
		exit(1);
	}

	//Initialise data into temp data field
	temp->data = data;
	//put top pointer reference into temp link
	temp->link = top;
	//make temp as top of stack
	top = temp;
	std::cout << data << " pushed into stack";
}

int StackUsingLinkedList::IsEmpty()
{
	//If Top is NULL, it means that there is no element in the stack
	return top == NULL;
}

int StackUsingLinkedList::Peek()
{
	//If Stack is not empty, return the top element
	if (!IsEmpty())
		return top->data;
	else
		exit(1);
}

void StackUsingLinkedList::Pop()
{
	Node* temp;
	//Check for stack Underflow
	if (top == NULL)
	{
		std::cout << "Stack underflow\n";
		exit(1);
	}
	else
	{
		//Asign top to temp
		temp = top;
		//Assign second noe to top
		top = top->link;
		//this will auto destroy the link b/w 1st and second node
		//release the memory
		free(temp);
	}
}