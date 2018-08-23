#ifndef _MY_MATRICES
#define _MY_MATRICES

struct Matrix
{
	unsigned long long a11;
	unsigned long long a12;
	unsigned long long a21;
	unsigned long long a22;
};

const Matrix base = { 1,1,1,0 };

//Multiply 2 matrices
Matrix matrix_mult(Matrix A, Matrix B);

//Compute (matrix base)^n using repeated squaring 
Matrix matrix_power(unsigned long n);


#endif // !_MY_MATRICES
