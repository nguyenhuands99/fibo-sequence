#include "PowerHeader.h"
#include <math.h>

unsigned long long power1(unsigned long n)
{
	unsigned long long ret = 1;
	for (unsigned long i = 0; i < n; i++)
	{
		ret *= base;
	}
	return ret;
}

unsigned long long power2(unsigned long n)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n % 2 == 0)
	{
		unsigned long long ret = power2(n / 2);
		return ret * ret;
	}
	else
	{
		unsigned long long ret = power2(n / 2);
		return ret * ret * base;
	}
}
