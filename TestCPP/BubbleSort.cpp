#include "header.h"
#include <utility>
using namespace std;

void BubbleSort(int array[], int n)
{
	for (int i = 0; i < n; i ++)
	{
		for (int j = 1; j < n - i; j ++)
		{
			if (array[j] < array[j -1])
			{
				swap(array[j], array[j - 1]);
			}
		}
	}
}