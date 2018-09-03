#define _CRT_SECURE_NO_WARNINGS
#define MY_FILE "D:\\OneDrive - VNU-HCMUS\\Huan\\Programming Projects\\Visual Studio Projects\\[DSAA]Fibonacci\\fibo-sequence\\fibo\\Debug\\fibo.exe"
#include "FiboHeader.h"
#include "FiboIO.h"
#include "PowerHeader.h"
#include <iostream>
#include <stdlib.h>
#include <sstream>

using namespace std;

int main(int argc, const char *argv[])
{
	argc = 3;
	argv[0] = MY_FILE; 
	argv[1] = "5";
	argv[2] = "100000";
	if (argc != 3)
		return 0;
	int alg = atoi(argv[1]);
	unsigned long long (*fib)(unsigned long);
	switch (alg)
	{
	case 1: fib = &fibo1; break;
	case 2: fib = &fibo2; break;
	case 3: fib = &fibo3; break;
	case 4: fib = &fibo4; break;
	case 5: fib = &fibo5; break;
	default: return 0;
	}
	unsigned long n;

	stringstream ss(argv[2]);
	ss >> n;

	cout << "F[" << n << "] = " << fib(n);

	printf("\n");
	system("pause");
	return 0;
}
