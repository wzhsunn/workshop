#include "header.h"


int Partition(int array[], int left, int right)
{
	int pivot = array[left];
	while (left < right)
	{
		while (left < right && array[right] > pivot)
		{
			right--;
		}
		array[left] = array[right];
		while (left < right && array[left] < pivot)
		{
			left++;
		}
		array[right] = array[left];
	}
	array[right] = pivot;
	return right;
}
void QuickSort(int array[], int left, int right)
{
	if (left < right)
	{
		int pivot = Partition(array, left, right);
		QuickSort(array, left, pivot - 1);
		QuickSort(array, pivot + 1, right);
	}
}