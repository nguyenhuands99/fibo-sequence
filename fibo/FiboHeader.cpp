#include "FiboHeader.h"
#include <vector>
#include <malloc.h>

using namespace std;

unsigned long long fibo1(unsigned long n)
{
	if (n <= 1)
	{
		return n;
	}
	else
	{
		return fibo1(n - 1) + fibo1(n - 2);
	}
}

unsigned long long fibo2(unsigned long n)
{
	if (n <= 1)
	{
		return n;
	}
	vector<unsigned long long> A;
	A.push_back(0);
	A.push_back(1);
	for (int i = 2; i <= n ; i++)
	{
		A.push_back(A[i - 1] + A[i - 2]);
	}
	return A[n];

}

unsigned long long fibo3(unsigned long n)
{
	if (n <= 1)
	{
		return n;
	}
	unsigned long long *A = new unsigned long long[n + 1];
	A[0] = 0; A[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		A[i] = A[i - 1] + A[i - 2];
	}
	unsigned long long ret = A[n];
	delete[] A;
	return ret;

}

unsigned long long fibo4(unsigned long n)
{
	if (n <= 1)
	{
		return n;
	}
	unsigned long long a = 0, b = 1, temp;
	unsigned long i;
	for (i = 2; i <= n; i++)
	{
		temp = a + b;
		a = b;
		b = temp;
	}
	return temp;
}
