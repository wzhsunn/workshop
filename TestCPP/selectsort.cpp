#include "header.h"
#include <utility>
using namespace std;

void SelectSort(int array[], int n)
{
	for (int i = 0; i < n; i ++)
	{
		int k = i;
		for (int j = i + 1; j < n; j ++)
		{
			if (array[j] < array[k])
			{
				k = j;
			}
		}
		if (k != i)
		{
			swap(array[i], array[k]);
		}
	}
}