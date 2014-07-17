#include "header.h"

#include <set>
#include <string>
using namespace std;
struct Record
{
	string label;
	int value;
};
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
const int MAXN = 1005;
struct Degree
{
	int p;
	int l;
	int e;
}d[MAXN];

void Test()
{
	int i, m, n, res, cases = 1;
	while (scanf("%d", &n), n)
	{
		for (i = 1; i <= n; i++)
		{
			scanf("%d", &m);
			d[m].p = i;
		}
		for (i = 1; i <= n; i++)
		{
			scanf("%d", &m);
			d[m].l = i;
		}
		for (i = 1; i <= n; i++)
			scanf("%d", &d[i].e);
		res = 0;
		for (i = 1; i <= n; i++)
		{
			if (d[i].p <= d[i].e)
				res += 3;
			else if (d[i].p <= d[i].l)
				res += 2;
			else
				res += 1;
		}
		printf("Case %d: %d\n", cases++, res);
	}
}
