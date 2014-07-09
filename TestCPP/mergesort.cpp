#include "header.h"

void Merge(int array1[], const int array1Size, int array2[], const int array2Size)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int* array = new int[array1Size + array2Size];
	while (i < array1Size && j < array2Size)
	{
		array[k++] = array1[i] < array2[j] ? array1[i++] : array2[j++];
	}

	while (i < array1Size)
	{
		array[k++] = array1[i++];
	}

	while (j < array2Size)
	{
		array[k++] = array2[j++];
	}

	for (int h = 0; h < (array1Size + array2Size); h ++)
	{
		array1[h] = array[h];
	}
	delete[] array;
}

void MergeSort(int array[], int n)
{
	if (n > 1)
	{
		int * array1 = array;
		int array1Size = n / 2;
		int * array2 = array1 + array1Size;
		int array2Size = n - array1Size;

		MergeSort(array1, array1Size);
		MergeSort(array2, array2Size);

		Merge(array1, array1Size, array2, array2Size);
	}
}