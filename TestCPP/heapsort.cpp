#include "header.h"
#include <utility>
using namespace std;

void Sift(int array[], const int root, const int len)
{
	int i = root;
	int c = i * 2 + 1;// left child
	while (c < len)
	{
		if (c + 1 < len && array[c] < array[c + 1])
		{
			c++;
		}
		if (array[i] > array[c])
		{
			break;
		}
		else
		{
			swap(array[i], array[c]);
			i = c;
			c = 2 * i + 1;
		}
	}
}
void HeapSort(int array[], const int n)
{
	//build heap
	for (int i = (n - 2) /2 ; i >= 0; i --)
	{
		Sift(array, i, n);
	}

	for (int i = 0; i < n; i ++)
	{
		swap(array[0], array[n - i - 1]);
		Sift(array, 0, n - i - 1);
	}
}