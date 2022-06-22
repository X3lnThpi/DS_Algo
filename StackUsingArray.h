#pragma once
#define MAX 1000

class StackUsingArray
{
public:
	int top;
	int a[MAX];
	int Pop();
	int Peek();
	bool IsEmpty();
	bool Push(int x);
	StackUsingArray();
};

