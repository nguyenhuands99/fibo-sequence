#define _CRT_SECURE_NO_WARNINGS
#include "FiboIO.h"
#include "FiboHeader.h"
#include "PowerHeader.h"
#include <iostream>


void fiboInput(unsigned long &n)
{
	printf("\nInput n: ");
	scanf("%d", &n);
}

void fiboOutput(unsigned long n)
{
	//printf("\nFibonacci Number: F[%lu] = %llu", n, fibo1(n));
	//printf("\nFibonacci Number: F[%lu] = %llu", n, fibo2(n));
	printf("\nFibonacci Number: F[%lu] = %llu", n, fibo3(n));
	//printf("\nFibonacci Number: F[%lu] = %llu", n, fibo4(n));
}

void powerOutput(unsigned long n)
{
	printf("\n3^%lu = %llu", n, power2(n));
}
