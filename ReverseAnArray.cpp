//Write a program to reverse an array
#include <iostream>
using namespace std;
static int array2[4];

//Iterative way
void ReverseArray(int arr[], int start, int end)
{
	int size = end;
	while(start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}

	for (int i = 0; i <= size; i++)
	{
		std::cout << arr[i];
		std::cout << endl;
	}
	
}

//Recursive way
void ReverseArrayRecursive(int arr[], int start, int end)
{

	if (start >= end)
		return;

	int temp = arr[start];
	arr[start] = arr[end];
	arr[end] = temp;

	//Recursive function calling
	ReverseArrayRecursive(arr, start + 1, end - 1);
}