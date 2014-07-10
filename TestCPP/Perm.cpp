#include "header.h"
#include <iostream>
using namespace std;

void Perm(int list[], int k, int m)
{
	if (k == m)
	{
		for (int i = 0; i <= m; i ++)
		{
			cout << list[i];
		}
		cout << endl;
	}
	else
	{
		for (int j = k; j <= m; j ++)
		{
			swap(list[j], list[k]);
			Perm(list, k + 1, m);
			swap(list[j], list[k]);
		}
	}
}

void TestPerm()
{
	int list[] = { 1, 2, 3, 4 };
	Perm(list, 0, 3);
}