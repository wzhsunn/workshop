#include "header.h"
#include <iostream>
using namespace std;

int Str2Int(const char* pStr)
{
	int value = 0;
	int sign = 1;
	if (*pStr == '-')
	{
		sign = -1;
		pStr++;
	}
	while (*pStr)
	{
		value = value * 10 + *pStr - '0';
		pStr++;
	}
	return sign * value;
}


void TestStr2Int()
{
	char* pStr = "-1";
	int result = Str2Int(pStr);
	cout << result << endl;
}