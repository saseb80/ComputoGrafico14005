#include "pch.h"
#include "Matrix.h"


Matrix::Matrix(unsigned rows, unsigned cols)
{
	mat.resize(rows);
	for (unsigned i = 0; i < mat.size(); i++)
	{
		mat[i].resize(cols, 0);
	}	
	//rows = rows;
	//cols = cols;
}

float& Matrix::operator()(const unsigned& i, const unsigned j) 
{
	return (mat[i][j]);

}



Matrix Matrix::operator+(Matrix& rhs)
{
	//if(mat.getCols() == rhs.getCols() && mat.getRows() == rhs.getRows)
	Matrix matrizxd(rhs.getCols,rhs.getRows);

	for (unsigned i = 0; i < rows; i++) 
	{
		for (unsigned j = 0; j < cols; j++)
		{
			matrizxd(i,j) = mat[i][j] + rhs(i,j);
		}
	}
	return matrizxd;
}

Matrix::~Matrix()
{
}
