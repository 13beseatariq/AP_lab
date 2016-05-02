#include <vector>
#include <iostream>
#include <cstdlib>
#include "vector.h"
#include "matrix.h"
using namespace std;



int main()
{
	vector_class vector(3);
	srand(1000);
	vector.populate_vector();

	matrix_class matrix(10, 10);
	matrix_class matrix1(10, 10);
	matrix.populate();
	matrix1.populate();
	std::vector<int> ans;

	//ans = matrix*vector;

	ans = matrix*matrix1;


	for (int i = 0; i < ans.size(); i++)
	{
		if (i%matrix1._cols == 0)
			cout << endl;
		cout << ans[i] << "  ";
	}
	cout << endl;

	return 0;

}
