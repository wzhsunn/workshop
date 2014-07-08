#include "header.h"

//单边扫描划分
int PartitionByOneSide(int *arr, int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;
	int j, tmp;
	for (j = low; j < high; ++j)
	if (arr[j] < pivot){
		tmp = arr[++i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
	tmp = arr[i + 1];
	arr[i + 1] = arr[high];
	arr[high] = tmp;
	return i + 1;
}
//两边扫描划分
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