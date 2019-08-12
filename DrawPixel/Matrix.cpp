#include "pch.h"
#include "Matrix.h"


Matrix::Matrix(unsigned rows, unsigned cols){
	
	mat.resize(rows);
	for (unsigned i = 0; i < mat.size(); i++){
		mat[i].resize(cols, 0);
	}	
	this->rows = rows;
	this->cols = cols;
}
unsigned Matrix::getCols() {
	
	return cols;
}
unsigned Matrix::getRows() {

	return rows;
}

float& Matrix::operator()(const unsigned& i, const unsigned j) {
	return (mat[i][j]);

}

Matrix Matrix::operator+(Matrix& rhs){
	
	Matrix matrisum(rhs.getCols(),rhs.getRows());

	for (unsigned i = 0; i < rows; i++) 
	{
		for (unsigned j = 0; j < cols; j++)
		{
			matrisum(i,j) = mat[i][j] + rhs(i,j);
		}
	}
	return matrisum;
}

Matrix Matrix::operator-(Matrix& rhs){
	
	Matrix matrires(rhs.getCols(), rhs.getRows());

	for (unsigned i = 0; i < rows; i++)
	{
		for (unsigned j = 0; j < cols; j++)
		{
			matrires(i, j) = mat[i][j] - rhs(i, j);
		}
	}
	return matrires;
}

//Matrix Matrix::operator*(Matrix& rhs){
//
//	Matrix matrimult(rhs.getCols(), rhs.getRows());
//
//	for (unsigned i = 0; i < rows; i++)
//	{
//		for (unsigned j = 0; j < cols; j++)
//		{
//			matrimult(i, j) = mat[i][j] + rhs(i, j);
//		}
//	}
//	return matrimult;
//}

Matrix::~Matrix()
{
}
