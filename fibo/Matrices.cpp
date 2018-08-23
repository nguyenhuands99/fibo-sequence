#include "Matrices.h"

Matrix matrix_mult(Matrix A, Matrix B)
{
	Matrix temp;
	temp.a11 = A.a11*B.a11 + A.a12*B.a21;
	temp.a12 = A.a11*B.a12 + A.a12*B.a22;
	temp.a21 = A.a21*B.a11 + A.a22*B.a21;
	temp.a22 = A.a21*B.a12 + A.a22*B.a22;
	return temp;
}

Matrix matrix_power(unsigned long n)
{
	Matrix unit = { 1,0,0,1 };
	if (n == 0)
		return unit;
	else if (n % 2 == 0)
	{
		Matrix ret;
		ret = matrix_power(n / 2);
		return matrix_mult(ret,ret);
	}
	else
	{
		Matrix ret;
		ret = matrix_power(n / 2);
		return matrix_mult(base, matrix_mult(ret, ret));
	}
}
