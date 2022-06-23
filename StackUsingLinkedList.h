#pragma once
class StackUsingLinkedList
{
public:
	struct Node
	{
		int data;
		Node* link;
	};

	void Push(int data);
	int IsEmpty();
	int Peek();
	void Pop();
	void Display();
};

