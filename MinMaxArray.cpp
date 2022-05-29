#include "MinMaxArray.h"

//SImple linear search
Pair GetMinMax(int arr[], int size) 
{
	struct Pair minmax;
	int i;

	//If there is only 1 element then return it as both min & max
	if (size == 1) 
	{
		minmax.min = arr[0];
		minmax.max = arr[0];
		return minmax;
	}

	//If there are more than one element, then initialize min & max
	if (arr[0] > arr[1])
	{
		minmax.max = arr[0];
		minmax.min = arr[1];
	}
	else
	{
		minmax.max = arr[1];
		minmax.min = arr[0];
	}

	for(int i = 0; i < size; i++)
	{
		if (arr[i] > minmax.max)
		{
			minmax.max = arr[i];
		}
		else if (arr[i] < minmax.min)
		{
			minmax.min = arr[i];
		}
	}
	return minmax;
}

//Method2 Tournament Methods
//Divide the array into 2 parts & compare the max & min of the two parts to get the max & min of whole array

Pair MinMax(int arr[], int low, int high)
{
	struct Pair minmax, mml, mmr;
	int mid;

	//if there is only one element
	if(low == high)
	{
		minmax.min = arr[low];
		minmax, max = arr[low];
		return minmax;
	}

	//if there are two elements
	if (high == low + 1) {
		if (arr[low] > arr[high]) 
		{
			minmax.max = arr[low];
			minmax.min = arr[high];
		}
		else
		{
			minmax.max = arr[high];
			minmax.min = arr[low];
		}
		return minmax;
	}

	// If there are more than 2 elements
	mid = (low + high) / 2;
	mml = GetMinMax(arr, low, mid);
	mmr = GetMinMax(arr, mid + 1, high);

	//compare minimums of two parts
	if (mml.min < mmr.min)
	{
		minmax.min = mml.min;
	}
	else
	{
		minmax.min = mmr.max;
	}
	return minmax;
}