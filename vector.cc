#include "vector.h"


vector_class::vector_class(int n) : _size(n) //constructor of vector class
{
	//cout << "Size of vector: " << _size <<endl;
}

void vector_class::populate_vector()
{
	for (int i = 0; i < _size; i++)
	{
		v.push_back(i);

	}
}



