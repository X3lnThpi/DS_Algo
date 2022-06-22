#include "StackUsingArray.h"
#include <stddef.h>
#include <iostream>

StackUsingArray::StackUsingArray()
{
	top = -1;

}

bool StackUsingArray::Push(int x)
{
	if (top >= (MAX - 1))
	{
		std::cout << "Stack Overflow";
	}
	else
	{
		a[++top] = x;
		std::cout << x << " Pushed into Stack \n";
		return true;
	}
}

int StackUsingArray::Pop()
{
	if (top < 0)
	{
		std::cout << "Stack underflow";
	}
	else
	{
		int x = a[top--];
		return x;
	}
}

int StackUsingArray::Peek()
{
	if (top < 0)
	{
		std::cout << "Stack Is empty";
	}
	else
	{
		int x = a[top];
		return x;
	}
}

bool StackUsingArray::IsEmpty()
{
	return(top < 0);
}