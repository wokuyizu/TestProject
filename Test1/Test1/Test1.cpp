// Test1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
#include "vector"
#include "string"
#include "algorithm"
#include "list"
#include "cstdlib"
using namespace std;
bool isPrime(int number)
{
	number = abs(number);
	if (number ==0 || number == 1)
	{
		return true;
	}
	int divisor;
	for (divisor = number / 2; number%divisor != 0;--divisor)
	{
		;
	}
	return divisor == 1;
}
int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> coll;
	coll.reserve(20);
	for (int i = 1; i <= 10; ++i)
	{
		coll.push_back(i);
	}
	for (vector<int>::iterator ite = coll.begin(); ite != coll.end();++ite)
	{
		cout << *ite << "    ";
	}
	cout << endl;


	vector<int>::iterator iteColl;

	for (vector<int>::iterator iter = coll.begin(); iter != coll.end(); ++iter)
	{
		if (4 == *iter)
		{
			iteColl = iter;
		}
	}
	cout << "Ԫ����" << *iteColl << endl;
	
	for (vector<int>::iterator iter = coll.begin(); iter != coll.end(); ++iter)
	{
		if (6 == *iter)
		{
			coll.erase(iter);
			break;
		}
	}
	for (vector<int>::iterator ite = coll.begin(); ite != coll.end(); ++ite)
	{
		cout << *ite << "    ";
	}
	cout << "Ԫ����" << *iteColl << endl;
	getchar();
}


