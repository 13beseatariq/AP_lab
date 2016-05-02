#include "matrix.h"
using namespace std;
matrix_class::matrix_class(int row, int col) : _rows(row), _cols(col)
{
	//cout << "Number of Rows: " << _rows << endl;
	//cout << "Number of Cols: " << _cols << endl;
}

void matrix_class::populate()
{
	for (int i = 0; i < (_rows*_cols); i++)
	{
		//mat.push_back(i);
		mat.push_back(rand()%100);
	}
}



//matrix vector multiplication
vector<int> matrix_class:: operator*(const vector_class& vec)
{
	vector<int> answer;
	if (this->_cols == vec.v.size())
	{
		//cout << "We are good to go" << endl;
		int counter = 0;//to iterate through the first matrix
		for (int i = 0; i < (this->mat.size() / vec.v.size()); i++)
		{
			int row = 0;
			for (int k = 0; k < vec.v.size(); k++)
			{
				row = row + (this->mat[counter] * vec.v[k]);
				counter++;
			}
			answer.push_back(row);
		}//outer for loop ends here
	}//inner for loop ends here
	return answer;
}//operator overloader closes here



//matrix matrix multiplication
vector<int> matrix_class:: operator*(const matrix_class& m)
{
	
	vector<int> answer;
	if (this->_cols == m._rows)
	{

		//converting second matrix to column major
		vector<int> v;
		for (int j = 0; j < m._cols; j++)
		{
			for (int i = 0; i < m._cols; i++)
			{
				int elem = m.mat[(i*m._cols) + j];
				v.push_back(elem);
			}
		}


		//matrix multiplication
		
		int c1 = 0;
		int c2 = 0;
		for (int i = 0; i < this->_rows; i++)
		{
			for (int j = 0; j < m._cols; j++)
			{
				int temp = 0;
				for (int k = 0; k < this->_cols; k++)
				{
					temp = temp + (this->mat[c1] * v[c2]);
					c1++;
					c2++;
				}
				c1 = c1 - this->_cols;
				answer.push_back(temp);
			}
			c2 = 0;
			c1 = c1 + this->_cols;
		}

	}//matrix if condition closes here

	return answer;
	
}//operator overloader closes here

