#define _CRT_SECURE_NO_WARNINGS
#include "FiboHeader.h"
#include "FiboIO.h"
#include "PowerHeader.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	unsigned long n;
	fiboInput(n);
	fiboOutput(n);
	//powerOutput(n);

	printf("\n");
	system("pause");
	return 0;
}