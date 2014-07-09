#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <vector>
#include <list>
#include <map>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;
#include "header.h"

const int array_size = 200;
const int loop_count = 1000000;
void test_strncpy()
{
	char s1[array_size]{0};
	char* s2 = new char[array_size];
	memset(s2, 'c', array_size);
	size_t start = clock();
	for (int i = 0; i != loop_count; ++i)
	{
		strncpy(s1, s2, array_size);
	}
	cout << __FUNCTION__ << ": " << clock() - start << endl;
	delete s2;
	s2 = nullptr;
}

void TestStringCopy()
{
	string s1;
	string s2;
	s2.append(array_size, 'c');
	size_t start = clock();
	for (int i = 0; i != loop_count; ++ i)
	{
		s1 = s2;
	}
	cout << __FUNCTION__ << ": " << clock() - start << endl;
}

class Base
{
private:
	virtual void f(){ cout << "Base::f" << endl; }
	virtual void g(){ cout << "Base::g" << endl; }
	virtual void h(){ cout << "Base::h" << endl; }
};
void TestBase()
{
	typedef void*(*Fun)(void);
	Base b;
	Fun pFun = nullptr;
	cout << "virtual table address:" << (int*)(&b) << endl;
	cout << "virtual fun address:" << (int*)*(int*)(&b) << endl;

	pFun = (Fun)*((int*)*(int*)(&b));
	pFun();
}

void TestVector()
{
	vector<int> foo;
	vector<int>::size_type sz = foo.capacity();
	cout << "sz[" << sz << "]\n";
	for (int i = 0; i < 100; ++ i)
	{
		foo.push_back(i);
		if (sz != foo.capacity())
		{
			sz = foo.capacity();
			cout << "capacity changed[" << sz << "]" << endl;
		}
	}

	vector<int> bar;
	sz = bar.capacity();
	cout << "sz[" << sz << "]\n";
	bar.reserve(100);
	sz = bar.capacity();
	cout << "sz[" << sz << "]" << endl;
	for (int i = 0; i < 101; ++ i)
	{
		bar.push_back(i);
		if (sz != bar.capacity())
		{
			sz = bar.capacity();
			cout << "capacity changed[" << sz << "]\n";
		}
	}
}
void Test() {
	vector<int> foo{ 1, 2, 3 };
	vector<int> bar{ 1, 2, 3 };
	cout << &foo << endl;
	cout << &bar << endl;

	list<int> list1{ 1, 2, 3 };
}
void TestMap()
{
	map<string, int> smap;
	smap["a"] = 0;
	smap.insert(make_pair("a", 1));
	cout << smap["a"] << endl;
	multimap<string, int> mm{ { "apple", 2 }, { "pear", 3 }, { "apple", 4 }, { "organge", 7 }, { "apple", 1 } };
	const string k{ "aapple" };
	auto pp = mm.equal_range(k);
	if (pp.first == pp.second)
	{
		cout << "no element with value" << k << endl;
	}
	else
	{
		cout << "element with value[" << k << "]\n";
		for (auto p = pp.first; p != pp.second; ++ p)
		{
			cout << p->second << " ";
		}
		cout << endl;
	}
}

void TestSort()
{
	int array[] = { 9, 1, 2, 3, 10, 11, 5 };
//	QuickSort(array, 0, 6);
	//SelectSort(array, 7);
	//BubbleSort(array, 7);
//	InsertSort(array, 7);
//	HeapSort(array, 7);
	MergeSort(array, 7);
	for (auto i : array)
	{
		cout << i << ' ';
	}
	cout << endl;

}


int main()
{
	/*cout << "This is a test" << endl;
	test_strncpy();
	TestStringCopy();*/
	//TestBase();
//	TestVector();
//	Test();
	

//	TestMap();
	TestSort();
	return 0;
}