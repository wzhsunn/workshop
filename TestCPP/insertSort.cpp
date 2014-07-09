#include "header.h"


void InsertSort(int array[], int n)
{
	for (int i = 1; i < n; i ++)
	{
		int tmp = array[i];
		int j;
		for (j = i - 1; j >= 0; j --)
		{
			if (array[j] > tmp)
			{
				array[j + 1] = array[j];
			}
			else
			{
				break;
			}
		}
		array[j + 1] = tmp;
	}
			
}